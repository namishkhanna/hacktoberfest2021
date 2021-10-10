#Rock, Paper or Scissors in Python

import random

def rps(player):
        H = ["ROCK", "PAPER", "SCISSOR"]
        bot = random.choice(H)
        user = player.upper()
        if user == "ROCK" or user == "PAPER" or user == "SCISSOR" or user == "SCISSORS":
            if user == bot:
                print("Its a tie!!")
            elif (
                (user == "ROCK" and bot == "SCISSOR")
                or (user == "PAPER" and bot == "ROCK")
                or ((user == "SCISSOR" or user == "SCISSORS") and bot == "PAPER")
            ):
                print("You Won!!!")
            else:
                print("You Lost :(")
        else:
            print("Invalid input.")

inp = input("Your choice?: ")
rps(inp)
