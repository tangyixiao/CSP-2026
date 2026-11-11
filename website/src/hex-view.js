export const HEX_PAGE_BYTES = 16 * 1024;

export function parseHexOffset(value) {
  const text = String(value).trim();
  if (!/^(?:0x[0-9a-f]+|[0-9]+)$/i.test(text)) throw new Error('请输入十进制偏移，或以 0x 开头的十六进制偏移。');
  const offset = Number(text);
  if (!Number.isSafeInteger(offset) || offset < 0) throw new Error('偏移超出有效范围。');
  return offset;
}

export function hexPage(bytes, requestedOffset = 0) {
  const total = bytes.length;
  const safe = Number.isSafeInteger(requestedOffset) ? requestedOffset : 0;
  const offset = Math.floor(Math.min(Math.max(0, safe), Math.max(0, total - 1)) / 16) * 16;
  const end = Math.min(total, offset + HEX_PAGE_BYTES);
  const lines = ['偏移      00 01 02 03 04 05 06 07  08 09 0A 0B 0C 0D 0E 0F  ASCII'];
  for (let start = offset; start < end; start += 16) {
    const row = bytes.subarray(start, Math.min(start + 16, end));
    const cells = Array.from({ length: 16 }, (_, i) => i < row.length ? row[i].toString(16).toUpperCase().padStart(2, '0') : '  ');
    const ascii = Array.from(row, byte => byte >= 32 && byte <= 126 ? String.fromCharCode(byte) : '.').join('');
    lines.push(`${start.toString(16).toUpperCase().padStart(8, '0')}  ${cells.slice(0, 8).join(' ')}  ${cells.slice(8).join(' ')}  ${ascii}`);
  }
  return { text: lines.join('\n'), offset, end, total };
}
