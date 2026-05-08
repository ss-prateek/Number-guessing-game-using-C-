# Random Number Guess Game

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Game](https://img.shields.io/badge/Type-CLI%20Game-2ea44f?style=for-the-badge)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-f9c74f?style=for-the-badge)

```
=====================================
       Random Number Guess Game
=====================================
I picked a number between 1 and 100.
Can you guess it?

Enter your guess: 50
Higher number please!

Enter your guess: 75
Lower number please!

Enter your guess: 63
Congrats! You guessed the number in 3 guesses.
```

## Project Preview

```mermaid
flowchart TD
    A[Start Game] --> B[Generate random number from 1 to 100]
    B --> C[Player enters a guess]
    C --> D{Is the guess correct?}
    D -- Too high --> E[Show: Lower number please]
    D -- Too low --> F[Show: Higher number please]
    E --> C
    F --> C
    D -- Correct --> G[Show total guesses]
    G --> H[End Game]
```

## Features

- Generates a random secret number between `1` and `100`
- Gives helpful hints after every wrong guess
- Counts how many attempts the player used
- Handles invalid non-number input
- Runs directly in the terminal

## What I Learned

This project practices C basics like variables, loops, conditionals, random number generation, user input, and simple terminal interaction.
