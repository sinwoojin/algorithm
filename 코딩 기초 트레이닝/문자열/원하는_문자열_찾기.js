function solution(myString, pat) {
  //myString을 다 소문자로 변환 후 pat도 소문자 변환해서 includes 함수를 통해 값 찾기
  return myString.toLowerCase().includes(pat.toLowerCase()) ? 1 : 0;
}
