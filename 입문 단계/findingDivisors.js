function solution(n) {
  // 초기는 빈 배열
  let answer = [];
  // 0부터 입력받은 n 까지 반복
  for (let i = 1; i <= n; i++) {
    // 0부터 n 까지 몫이 0 이 나오면 약수기에 배열에 i를 추가
    n % i === 0 && answer.push(i);
  }
  return answer; // 약수들만 추가한 배열을 return
}
