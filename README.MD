I was curious and wanted to create a player class of which different types of players can be derived from such as a Basketball player. The base player can score, run, change teams, and level up. They also have a level, points per game stat, fitness level, player number and team. On the other hand, the derived player, in this case, a Basketball player, can have additional things such as win shares, minutes played per game, and team position.

Each player can do multiple things in order to improve their scoring, fitness, and overall stats. Those actions include running and scoring. The following is an example of the output for the player base class:

```
Player 1: 

Your player level is: 0
Your player name is: Peter Parker
Your player number is: 0

CONGRATULATIONS, you have reached level 20!!! //This occurs after calling the run or score function which cause the player to train and level up
CONGRATULATIONS, you have reached level 22!!! //This occurs after calling the run or score function which cause the player to train and level up

Your player level is: 22 //We can see now that the player leveled up by 22 levels 

Keep going! you can level up! //This occurs after calling the run or score function BUT the training is not enough for the player to level up


//The following is the summary function which tells the user everything about the player
Peter Parker is one of the best players in league history. Throughout his career, he has scored 2 points per game. He retired with the Spurs as number 0.
The following are his stats:
Points Per Game: 2
Fitness: 20
Level: 22

```


Here is another example:

```
Player 2: 

Your player level is: 0
Your player fitness level is: 0
Your player ppg is: 0

CONGRATULATIONS, you have reached level 1!!! //Player repeatedly runs and scores which causes them to level up
CONGRATULATIONS, you have reached level 2!!!
CONGRATULATIONS, you have reached level 17!!!
CONGRATULATIONS, you have reached level 18!!!
CONGRATULATIONS, you have reached level 33!!!
CONGRATULATIONS, you have reached level 34!!!

Your player level is: 34 //higher level
Your player fitness level is: 4 //improved fitness
Your player ppg is: 30 //increased points per game

//This is the summary of that particular player
BOB is one of the best players in league history. Throughout his career, he has scored 30 points per game. He retired with the Warriors as number 100.
The following are his stats:
Points Per Game: 30
Fitness: 4
Level: 34
```

Now, let's take a look at the output for the Basketball Player:

```
Basketball Player: 

//Player initial information below:
Name: Marques Brownlee
Level: 0
Minutes per game: 0
Number: 2
Position: Small Forward
Points per game: 0
Team: Huston Rockets
Wins per 48 minutes: 0

//Summary before practicing
Marques Brownlee is one of the best players in NBA history. Throughout his career, he has scored 0 points per game. He retired with the Huston Rockets as number 2. During his time there, he played as a Small Forward, averaging 0 minutes per game. He contributed to his team wins, having a 0 of win shares per 48 minutes.

The following are his stats:
Points Per Game: 0
Fitness: 0
Level: 0

CONGRATULATIONS, you have reached level 1!!! //The player keeps scoring, shooting and improving.
CONGRATULATIONS, you have reached level 2!!!
CONGRATULATIONS, you have reached level 3!!!
CONGRATULATIONS, you have reached level 4!!!
CONGRATULATIONS, you have reached level 5!!!
CONGRATULATIONS, you have reached level 6!!!
CONGRATULATIONS, you have reached level 7!!!
CONGRATULATIONS, you have reached level 8!!!
CONGRATULATIONS, you have reached level 9!!!
CONGRATULATIONS, you have reached level 10!!!
CONGRATULATIONS, you have reached level 11!!!
CONGRATULATIONS, you have reached level 12!!!


//New summary after his change:
Marques Brownlee is one of the best players in NBA history. Throughout his career, he has scored 6 points per game. He retired with the Huston Rockets as number 2. During his time there, he played as a Small Forward, averaging 3.6 minutes per game.He contributed to his team wins, having a 0.06 of win shares per 48 minutes.

The following are his stats:
Points Per Game: 6
Fitness: 6
Level: 12
```
