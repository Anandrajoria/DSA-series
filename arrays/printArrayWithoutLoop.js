function printArray(x) {
  if(x==0) return [];
  const arr=printArray(x-1)
  arr.push(x);
  return arr
}

console.log(printArray(5));
