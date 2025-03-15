const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input;

rl.on("line", (line) => {
  input = [...line];
}).on("close", () => {
  console.log(
    input
      .map((char) =>
        // 배열로 바꾸고 정규표현식을 사용해 a-z를 비교 a-z라면 대문자 출력 아니라면 소문자를 출력
        /[a-z]/.test(char) ? char.toUpperCase() : char.toLowerCase()
      )
      .join("")
  );
});
