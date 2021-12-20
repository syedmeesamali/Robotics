//Define graph
const graph = {
    a: ['c', 'b'],
    b: ['d'],
    c: ['e'],
    d: ['f'],
    e: [],
    f: []
};

//Classic depth first graph print
const depthFirstPrint = (graph, source) => 
{
    const stack = [source];
    while (stack.length > 0)
    {
        const current = stack.pop();
        for (let neighbor of graph[current])
        {
            stack.push(neighbor);
        }
    }
}; //end of function

//Recurssive graph print
const depthFirstRecur = (graph, source) => 
{
    console.log(source);
    document.write(source + '</br>');
    for (let neighbor of graph[source])
    {
        depthFirstRecur(graph, neighbor);
    }
}; //end of function


const breadthFirst = (graph, source) =>
{
    const queue = [ source ];
    while (queue.length > 0)
    {
        const current = queue.shift();
        document.write('<li>' + current + '</br>');
        for (let neighbor of graph[current])
        {
            queue.push(neighbor);
        }
    }
};

//First is the print function
//depthFirstPrint(graph, 'a');
breadthFirst(graph, 'a')