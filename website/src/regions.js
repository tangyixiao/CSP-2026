// Regional identities and their individual approved image assets.
// Explicit URLs let Vite include every asset without dynamic glob execution in Node.
export const REGIONS = Object.freeze({
  AH: Object.freeze({ name: '安徽', accent: '#726b85', motif: '山脊与白墙' }),
  BJ: Object.freeze({ name: '北京', accent: '#a16c68', motif: '层叠屋脊' }),
  CQ: Object.freeze({ name: '重庆', accent: '#8e7978', motif: '江桥与叠城' }),
  FJ: Object.freeze({ name: '福建', accent: '#6b8992', motif: '海岸与屋脊' }),
  GD: Object.freeze({ name: '广东', accent: '#628d83', motif: '珠江与塔影' }),
  GS: Object.freeze({ name: '甘肃', accent: '#a28c6b', motif: '风蚀山与关隘' }),
  GX: Object.freeze({ name: '广西', accent: '#718d78', motif: '峰林与水面' }),
  GZ: Object.freeze({ name: '贵州', accent: '#6e8986', motif: '层峰与高桥' }),
  HA: Object.freeze({ name: '河南', accent: '#9b8771', motif: '平原与古塔' }),
  HB: Object.freeze({ name: '湖北', accent: '#7e7992', motif: '江岸与楼阁' }),
  HE: Object.freeze({ name: '河北', accent: '#8d7e76', motif: '山脊与长城' }),
  HI: Object.freeze({ name: '海南', accent: '#6d9690', motif: '弧形海岸与棕叶' }),
  HL: Object.freeze({ name: '黑龙江', accent: '#7d8e99', motif: '松林与宽河' }),
  HN: Object.freeze({ name: '湖南', accent: '#7d8c77', motif: '湖洲与远山' }),
  JL: Object.freeze({ name: '吉林', accent: '#778f8a', motif: '火山轮廓与天池' }),
  JS: Object.freeze({ name: '江苏', accent: '#798e92', motif: '园窗与运河' }),
  JX: Object.freeze({ name: '江西', accent: '#7a8b92', motif: '湖面与高阁' }),
  LN: Object.freeze({ name: '辽宁', accent: '#7e8994', motif: '港湾与海岬' }),
  NM: Object.freeze({ name: '内蒙古', accent: '#8c9576', motif: '草原弧线' }),
  QH: Object.freeze({ name: '青海', accent: '#7c91a1', motif: '雪山与湖泊' }),
  SC: Object.freeze({ name: '四川', accent: '#7c947f', motif: '层叠山岭' }),
  SD: Object.freeze({ name: '山东', accent: '#8f8d79', motif: '雄峰与海线' }),
  SH: Object.freeze({ name: '上海', accent: '#9b7d92', motif: '浦江城市天际线' }),
  SN: Object.freeze({ name: '陕西', accent: '#9a8174', motif: '城墙与方塔' }),
  SX: Object.freeze({ name: '山西', accent: '#8b7b83', motif: '台地与木构' }),
  TJ: Object.freeze({ name: '天津', accent: '#8d879a', motif: '海河桥与街廓' }),
  XJ: Object.freeze({ name: '新疆', accent: '#a08d80', motif: '雪岭与绿洲' }),
  YN: Object.freeze({ name: '云南', accent: '#8c889c', motif: '远山与梯田' }),
  ZJ: Object.freeze({ name: '浙江', accent: '#6f8f89', motif: '河岸与拱桥' }),
});

const images = Object.freeze({
  AH: new URL('./assets/regions/AH.webp', import.meta.url).href,
  BJ: new URL('./assets/regions/BJ.webp', import.meta.url).href,
  CQ: new URL('./assets/regions/CQ.webp', import.meta.url).href,
  FJ: new URL('./assets/regions/FJ.webp', import.meta.url).href,
  GD: new URL('./assets/regions/GD.webp', import.meta.url).href,
  GS: new URL('./assets/regions/GS.webp', import.meta.url).href,
  GX: new URL('./assets/regions/GX.webp', import.meta.url).href,
  GZ: new URL('./assets/regions/GZ.webp', import.meta.url).href,
  HA: new URL('./assets/regions/HA.webp', import.meta.url).href,
  HB: new URL('./assets/regions/HB.webp', import.meta.url).href,
  HE: new URL('./assets/regions/HE.webp', import.meta.url).href,
  HI: new URL('./assets/regions/HI.webp', import.meta.url).href,
  HL: new URL('./assets/regions/HL.webp', import.meta.url).href,
  HN: new URL('./assets/regions/HN.webp', import.meta.url).href,
  JL: new URL('./assets/regions/JL.webp', import.meta.url).href,
  JS: new URL('./assets/regions/JS.webp', import.meta.url).href,
  JX: new URL('./assets/regions/JX.webp', import.meta.url).href,
  LN: new URL('./assets/regions/LN.webp', import.meta.url).href,
  NM: new URL('./assets/regions/NM.webp', import.meta.url).href,
  QH: new URL('./assets/regions/QH.webp', import.meta.url).href,
  SC: new URL('./assets/regions/SC.webp', import.meta.url).href,
  SD: new URL('./assets/regions/SD.webp', import.meta.url).href,
  SH: new URL('./assets/regions/SH.webp', import.meta.url).href,
  SN: new URL('./assets/regions/SN.webp', import.meta.url).href,
  SX: new URL('./assets/regions/SX.webp', import.meta.url).href,
  TJ: new URL('./assets/regions/TJ.webp', import.meta.url).href,
  XJ: new URL('./assets/regions/XJ.webp', import.meta.url).href,
  YN: new URL('./assets/regions/YN.webp', import.meta.url).href,
  ZJ: new URL('./assets/regions/ZJ.webp', import.meta.url).href,
});

/** Exact region image only; unsupported input has no borrowed landmark. */
export function regionImage(code) {
  return typeof code === 'string' && Object.hasOwn(images, code) ? images[code] : '';
}

/** Decorative compatibility markup. Layout belongs to the surrounding card. */
export function regionArtwork(code) {
  const url = regionImage(code);
  if (!url) return '';
  const safeURL = url.replaceAll('&', '&amp;').replaceAll('"', '&quot;').replaceAll('<', '&lt;').replaceAll('>', '&gt;');
  return `<img src="${safeURL}" alt="" aria-hidden="true" data-region="${code}" loading="lazy" decoding="async">`;
}
