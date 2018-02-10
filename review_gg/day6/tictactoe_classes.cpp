//tictactoe_classes.cpp
#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;

class Board
{
	char positionSelected[16];
	char winner;

public:
	Board()
	{
		winner='z';
		for(int i=0; i<16; i++)
		{
			positionSelected[i]='_';
		}
	}

	char* getPositions(void)
	{
		return positionSelected;
	}

	int setPosition(int gridNumber, char user)
	{
		{
		if(positionSelected[gridNumber]=='_')
		{
			positionSelected[gridNumber]=user;
			return 0;
		}
		else
		{
			return -1;
		}
		}
		return 0;
	}

	char checkRows()
	{
		int rows=0;
		int columns=0;
		int fourInRowX=0;
		int fourInRowO=0;

		for(int rows=0; rows<16; rows=rows+4)
		{
			for(int i=0; i<4; i++)
			{
				if(positionSelected[i+rows]=='x')
					fourInRowX++;
				if(positionSelected[i+rows]=='o')
					fourInRowO++;
			}
			if(fourInRowX==4)
			{
				winner='x';
				return 'x';
			}
			if(fourInRowO==4)
			{
				winner='o';
				return 'o';
			}
			fourInRowX=0;
			fourInRowO=0;

		}
		return 'z';
	}

	char checkColumns()
	{
		int rows =0;
		int columns=0;
		int fourInRowX=0;
		int fourInRowO=0;
		for(int columns=0; columns<4;columns++)
		{
			for(int i=0; i<16; i=i+4)
			{
				if(positionSelected[i+columns]=='x')
					fourInRowX++;
				if(positionSelected[i+columns]=='o')
					fourInRowO++;
			}
			if(fourInRowX ==4)
			{
				winner ='x';
				return 'x';
			}
			if(fourInRowO==4)
			{
				winner='o';
				return'o';
			}

		}
		return 'z';
	}

	check checkDiagnoals()
	{
		char winner='z';
		int fourInRowX=0;
		int fourInRowO=0;

		//check left to right diagnoal
		for(int i=0; i<16; i=i+5)
		{
			if(positionSelected[i]='x')
			{
				fourInRowX++;
			}
			if(positionSelected[i]='o')
			{
				fourInRowO++;
			}

		}
			if(fourInRowO !=4 && fourInRowX!=4)
			{
				fourInRowX=0;
				fourInRowO=0;
				for(int i-3; i<15; i=i+3)
				{
					if(positionSelected[i]=='x')
						fourInRowX++;
					if(positionSelected[i]=='o')
						fourInRowO++;
				}
			}
			if(fourInRowX==4)
			{
				winner='x';
				return winner;
			}
			if(fourInRowO==4)
			{
				winner='o'
				return winner;
			}
			fourInRowX=0;
			fourInRowO=0;
			return winner;
		}

	char determinWinner()
	{
		char winner='z';
		winner=checkRows();
		if(winner=='z')
			winner==checkColumns();
		if(winner=='z')
			winner=checkDiagnoals();
		return winner;
	}
	
};