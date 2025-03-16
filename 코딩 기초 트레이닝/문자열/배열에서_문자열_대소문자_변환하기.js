function solution(strArr) {
  return strArr.map((el, i) =>
    // map으로 돌리고 짝수 인덱스면 소문자 아니면 대문자로 반환 map은 return 하는데 forEach는 undefined 출력해서 map으로 돌림
    i % 2 === 0 ? el.toLowerCase() : el.toUpperCase()
  );
}
