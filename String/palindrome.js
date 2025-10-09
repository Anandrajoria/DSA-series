function isPlaindrome(s) {
  let p = 0;
  for (let i = s.length-1; i >= 0; i--) {
    if (p >= i) break;
    if (s[p] !== s[i]) return false;
    p++;
  }
  return true;
}

console.log(isPlaindrome("madam"));
