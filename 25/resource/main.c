#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[],
	const char *wSuit[]);

int main(void)
{
	const char *suit[4] = { "Hearts", "Diamonds", "Clubs","Spades" };

	const char *face[13] =
	{"Ace","Deuce", "Three", "Four",
	 "Five", "Six", "Seven", "Eight",
	 "Nine", "Ten", "Jack", "Queen", "King" };

	int deck[4][13] = {0};

	srand(time(0));

	shuffle(deck);
	deal(deck,face, suit);
	system("pause");
	return 0;
	
}

void shuffle(int wDeck[][13])
{
	int row;
	int column;
	int card;

	for (card = 1; card <= 52; card++)
	{
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (wDeck[row][column] != 0);

		wDeck[row][column] = card;
	}
}

void deal(const int wDeck[][13], const char *wFace[],
			const char *wSuit[])
{
		int card;
		int row;
		int Column;

		for (card = 1; card <= 52; card++)
		{
			for (row = 0; row <= 3; row++)
			{
				for (Column = 0; Column <= 12; Column++)
				{
					if (wDeck[row][Column] == card)
					{
						printf("%5s of %-8sftc", wFace[Column], wSuit[row],
							card % 2 == 0 ? '\n' : '\t');
					}
				}
			}
		}
}