import { gunzipSync } from 'node:zlib';
import { decodeSource, MAX_SOURCE_BYTES } from '../src/source.js';

const TEXT = Object.freeze({ previewable: true, previewKind: 'text' });
const HEX = Object.freeze({ previewable: true, previewKind: 'hex' });
const LARGE = Object.freeze({ previewable: false, previewReason: 'too-large' });
const EXPANDED = Object.freeze({ previewable: true, previewKind: 'hex', previewReason: 'expanded-too-large' });

/** Inspect once while streaming packs; never modify the archived bytes. */
export function inspectPreviewContent(raw) {
  if (raw.length > MAX_SOURCE_BYTES) return LARGE;
  let bytes = raw;
  if (raw[0] === 0x1f && raw[1] === 0x8b) {
    try { bytes = gunzipSync(raw, { maxOutputLength: MAX_SOURCE_BYTES }); }
    catch (error) { return error.code === 'ERR_BUFFER_TOO_LARGE' ? EXPANDED : HEX; }
  }
  try { decodeSource(bytes); return TEXT; } catch { return HEX; }
}
