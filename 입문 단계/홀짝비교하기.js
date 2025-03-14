const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = 0;

rl.on("line", function (line) {
  input = line;
}).on("close", function () {
  // input의 몫이 0 아니라면 짝수 아니면 홀수 변환
  console.log(input % 2 === 0 ? `${input} is even` : `${input} is odd`);
});
