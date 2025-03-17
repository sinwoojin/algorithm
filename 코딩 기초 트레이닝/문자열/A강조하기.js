// https://school.programmers.co.kr/learn/courses/30/lessons/181874

function solution(myString) {
  let answer = "";
  answer = myString.toLowerCase();
  // 요구사항을 보면 A빼고 다 소문자 출력을 요구해 해당 코드 작성
  return answer.replaceAll("a", "A");
}
