function isPrime(n) {
  let result = true;
  
  if(n==1) return false
  for (let i = 2; i * i < n; i++) {
    if (n % i == 0) {
      result = false;
    }
  }
  return result;
}
console.log(isPrime(1));
