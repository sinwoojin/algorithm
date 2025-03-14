function solution(quiz) {
  let answer = [];
  quiz.map((el) =>
    // eval: 문자 숫자 상관없이 식 계산
    // 식이 참이면 O 아니면 X를 반환
    eval(el.replace("=", "==")) ? answer.push("O") : answer.push("X")
  );
  return answer;
}
