
var iterations = 10000000;
var before = currentTime();
longComputation(iterations);
var after = currentTime();
var nanoseconds = after - before;
console.log("(Node) Duration: " + nanoseconds/1000000 + "ms");

function longComputation(iterations)
{
	while (iterations--)
	{
		//var r = Math.floor(Math.random() * 128);
		var a = Math.pow(3,64);
	}
}

function currentTime()
{
	return process.hrtime()[1];
	//return (new Date).getTime();
}
