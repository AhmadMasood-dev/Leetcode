/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let n=init
  return  { increment(){
    n++;
    return n;
  },decrement(){
    n--;
    return n;
  },reset(){return n=init}}
};

/**
 * const counter = createCounter(0)
 * counter.increment(); // 1
 * counter.increment(); // 2
 * counter.decrement(); // 1
 * counter.reset(); // 0
 * counter.reset(); // 0
 */