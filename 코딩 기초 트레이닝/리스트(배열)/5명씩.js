function solution(names) {
  let result = [names[0]]; // 첫 번째 이름으로 초기화
  for (let i = 1; i < names.length; i++) {
    // i는 1부터 시작하고, names.length는 초과하지 않도록
    if (i % 5 === 0) {
      // 5로 나누어 떨어지면
      result.push(names[i]); // result에 이름을 추가
    }
  }
  return result; // 결과 반환
}
