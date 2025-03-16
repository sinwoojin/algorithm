function solution(num_list) {
  let odd = 0;
  let even = 0;
  // 받자마자 forEach를 이용해 문자열 반복하고 index가 홀수라면 odd에 요소를 추가 짝수면 even에 값 추가
  num_list.forEach((el, i) => (!(i % 2) ? (even = even + el) : (odd += el)));
  // 홀수를 다 더한 값과 짝수를 더한값 중 더 높은 수를 반환
  return odd > even ? odd : even;
}
