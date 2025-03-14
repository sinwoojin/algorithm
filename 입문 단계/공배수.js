function solution(number, n, m) {
  // 첫번째 조건 : number과 n이 나눠지면 그 다음 조건으로 이동, 조건 2: number와 m의 몫이 0이면 두 조건을 모두 만족하면 1 아니면 0 return
  return number % n === 0 && number % m === 0 ? 1 : 0;
}
