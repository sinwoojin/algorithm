function solution(a: string, b: string) {
  let sum1 = String(a) + String(b);
  let sum2 = String(b) + String(a);
  return sum1 > sum2 ? Number(sum1) : Number(sum2);
}
