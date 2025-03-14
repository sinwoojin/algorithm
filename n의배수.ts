function solution(num: number, n: number) {
  // num을 n으로 나눠 몫이 0이 아니라면 0 출력인데 !로 뒤집어서 반대로 출력
  return +!(num % n !== 0);
}
