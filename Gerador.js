const chars = {
    "letters": "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzÇç",
    "numbers": "0123456789",
    "symbols": "!@#$%&*()-_+=^{}[];:?",
};
let seed;
let password = "";
function randomInteger(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
};
function Generate(length) {
    for (let i = 0; i < length; i++) {
        seed = randomInteger(1, 3);
        switch (seed) {
            case 1:
                seed = randomInteger(0, chars.letters.length - 1);
                password += chars.letters[seed];
                break;
            case 2:
                seed = randomInteger(0, chars.numbers.length - 1);
                password += chars.numbers[seed];
                break;
            case 3:
                seed = randomInteger(0, chars.symbols.length - 1);
                password += chars.symbols[seed];
                break;
        };
    };
    console.log(`Your password is "${password}"`);
    return password = "";
};

Generate(15)

