// https://www.naukri.com/code360/problems/print-fibonacci-series_7410103?topList=ninjas-sde-sheet&problemListRedirection=true


function fibonaccaiSeries(n){
    if(n<=0) return []
    let fib=[0]

    if(n==1) return fib
    fib[1]=1

    for(let i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2]
    }
    return fib;
}
console.log(fibonaccaiSeries(5))