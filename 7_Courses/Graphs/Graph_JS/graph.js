//Core of depth first is a stack
const depthFirst = (graph, source) => {
    const stack = [ source ];           //Array as a stack in JS
    //Push and pop of list works in the same way as real stack
    while (stack.length > 0)
    {
        const current = stack.pop();
        console.log(current);
    }

};

const graph = {
    a: ['b', 'c'],
    b: ['d'],
    c: ['e'],
    d: ['f'],
    e: [],
    f: []
}; //Define graph as an object in JS and nodes having connections as lists

document.write('</br></br>');
depthFirst(graph, 'a')