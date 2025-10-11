function* fibonaaci(){
    let a=0
    let b=1;

    while(true){
        yield a;
        b=a+b
        a=b-a
    }
}

const myFibonacci = fibonaaci();
// console.log(myFibonacci.next().value);
// console.log(myFibonacci.next().value);


function* generator(){
    yield 1;
    yield 2;
    yield 3;
}

const gen=generator()
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
