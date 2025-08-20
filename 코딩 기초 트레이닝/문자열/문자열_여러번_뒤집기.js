function solution(my_string, queries) {
  let arr = my_string.split(""); // 문자열 → 배열

  for (let [s, e] of queries) {
    // 부분 뒤집기
    let reversed = arr.slice(s, e + 1).reverse();
    arr.splice(s, e - s + 1, ...reversed);
  }

  return arr.join(""); // 배열 → 문자열
}
