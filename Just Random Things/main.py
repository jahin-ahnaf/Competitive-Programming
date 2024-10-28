import random

player = input("Rock, Paper or Scissor?\n")

choices = ["Rock", "Paper", "Scissor"]
bot = random.choice(choices)

if player == bot:
    print("Bot: ", bot, "DRAW!")

if player == "Rock" and bot == "Scissor":
    print("Bot: ", bot, "You Won!")

elif player == "Paper" and bot == "Rock":
    print("Bot: ", bot, "You Won!")

elif player == "Scissor" and bot == "Paper":
    print("Bot: ", bot, "You Won!")

else:
    print("Bot: ", bot, "You Lost!")


