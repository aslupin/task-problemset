// Task for learn
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
rl.question('Input', (answer) => {
    // TODO: Log the answer in a database
    console.log(`Output : ${answer}`);

    rl.close();
});