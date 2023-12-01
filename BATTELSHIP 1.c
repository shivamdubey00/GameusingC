#include<stdio.h>
#include<time.h>
#define size 10
#define num_ship 5
/*
							---------------- Project OF Class : SYIT/B --------------
							------------ Battelship Game Using Matrices -------------
							---------------- of DATA STRUCTURE in C -----------------
							

********** Group Members Details **********

	      NAME				   ROll no.
	      
	1) Shivam Dubey				4175
	2) Aayush Yadav				4124
	3) Aqsa Shaikh				4135

************ Global VAriables : **************

  	 Name   			Data_type           Details 
 
 	option				 Integer		Creating the Variable for Selecting  Main menu  Option 
 	
 player_name[9]			 String			The Variable for storing Players Name 
 
  setting_op		    Integer			Creating this variable for selecting the Option from setting menu 
  

************  Fuction Details : **************

  	   Name   	   					 Details of 
	
    aboutus()  				-  This Function is Use To display the Section of About Us 
   
 players_setting()			-  This function is for players setting Option in Setting .....
   
  setting_tab()				-  A Function for Setting option In Game 
  
  help()					- a function for the Help and the FAQ's option 
  
************  Most used Function  : **************

		> 	printf(" ");
		>  	scanf(" ";



*/

int option; // for Selecting the operation to perform
void aboutus(); //Declaring the Function About us for Aboutt us option  
char player_name[9]="Guest 001";// Creating the Variable for Players Name
void players_setting(); // Creating The Function for Setting Option
int setting_op; // Variable for selecting a option in settings
void setting_tab(); //  creating a function for setting 
void help(); // a function for the Help and the FAsqs option 
void how_to_play();// a function to display the How to play section 
void delay(); //creating a Delay function to delay the Output
void play_hard();

char user_board[size][size]; // this matrix is for the user To place the ship At any position in matrix 
int i,j,k;
int num=0;
int num2=0; //
int counter=0; // this is counter variable 
int put_ship;
int put_ship_row; // Varibale for taking the index at which row You want to Place Ship
int put_ship_column;//  Varibale for taking the indexat which column You want to Place Ship
int computer_board[size][size]; // this Is a matrix for the Computer To Place The Ship According to Him 
int getRandomNumber( min,  max) // creating The Function Which will give the Random Number According to Him 
 {
    return min + rand() % (max - min + 1);
 }
int ctarget_row; // temporary varibale for computer targetting row 
int ctarget_column; // temporary varibale for computer targetting column
int utarget_row; // temporary varibale for user targetting row
int utarget_column; // temporary varibale for user targetting column
int put_random_row; // for Getting the Random row value
int put_random_column; // for Getting the Random Column value 
void delay(); //creating a Delay function to delay the Output
void target_computer(); // user Will Target the Computer and CHeck For The Ship at Given index by user 
void target_user(); // computer Will Target the user  and CHeck For The Ship at Given index by user  
int player_hits = 0; // Creating the variable to get the couter for the no of hits of player 
int computer_hits = 0; // Creating the variable to get the couter for the no of hits of computer 
void display_user_board(); // creating the function for Displaying the Users board 


int main()
{
	
while(1)
{
	printf("\n");
	delay(1);
	printf("Last Update : 01/09/2023 \t\t\t-----------  BATTELSHIP GAME USING MATRICES ----------\t\t Player Name\t\tUsing Data Structure\n");
	printf("  You are Up to date \t\t\t\t------------------ by SYIT students ------------------\t\t[ %s ] \t\t  Version 3.0.0.1 \n",player_name);
	printf("\n\n\n\n");
	printf("\n\t\t\t\t\t\t\t\t    WELCOME TO   				\n");
	printf("\n\t\t\t\t\t\t\t\t  BATTELSHIP GAME 			\n\n");	
	printf("\t\t\t\t\t\t  ************************************************ 		\n\n\n");
	printf("\n\t\t\t\t\t		>  1. Play \n ");
	printf("\t\t\t\t\t 		>  2. How to Play? \n");
	printf("\t\t\t\t\t		>  3. About us  \n");
	printf("\t\t\t\t\t		>  4. Help & FAQ's \n");
	printf("\t\t\t\t\t		>  5. Setting \n");
	printf("\t\t\t\t\t		>  6. Quit \n");
	printf(" \n\n\n\n\n");
	printf("\t\t\t\t\t\t >>>> Enter Your Choice Here ...... ");
	scanf("%d",&option);
	printf("\n\n\n\n");
switch(option)
{
	case 1:
		delay(1);
		printf("\n\t\t\t\t\t\t       You had Selected How to Play? Option \n\n");
		delay(1);
		printf("\t\t\t\t\t\t           Wait we are Processing .........\n\n");
		delay(1);
		printf("\t\t\t\t\t\t           Wait we are processing....\n\n");
		delay(1);
		printf("\t\t\t\t\t\t       Be patient while we are Processing ...... \n\n\n\n\n\n\n\n\n\n\n");
		play_hard();
		break;
		
	case 2:
		delay(1);
		printf("\n\t\t\t\t\t\t          You had Selected How to Play? Option \n");
		delay(1);
		printf("\t\t\t\t\t\t            Wait we are Processing .........");
		delay(1);
		printf("\t\t\t\t\t\t            Be patient while we are Processing ...... ");
		printf("\n\n  ");
		how_to_play();
		break;
		
	case 3:
		delay(1);
		printf("\n\t\t\t\t\t\t          You had Selected About Option \n\n");
		delay(1);
		printf("\t\t\t\t\t\t            Wait we are Processing .........");
		delay(1);
		printf("\n\t\t\t\t\t\t            Be patient while we are Processing ...... ");
		printf("\n\n");
		aboutus(); //Calling the About us functionx
		break;
		
	case 4:
		delay(1);
		printf("\n\t\t\t\t\t\t          You had Selected Help & FAQ's Option \n\n");
		delay(1);
		printf("\t\t\t\t\t\t            Wait we are Processing .........");
		delay(1);
		printf("\n\n\t\t\t\t\t\t            Be patient while we are Processing ...... ");
		printf("\n\n");
		help(); //Calling the About us functionx
		break;
		
	case 5:
		delay(1);
		printf("\n\t\t\t\t\t\t          You had Selected Setting Option \n\n");
		delay(1);
		printf("\t\t\t\t\t\t            Wait we are Processing .........");
		delay(1);
		printf("\n\t\t\t\t\t\t            Be patient while we are Processing ...... ");
		printf("\n\n");
		setting_tab(); // function for setting Options 
			
		break;
	case 6:
		delay(1);
		printf("\n\n");
		printf("add the ending statement comming soon ");
		 //Calling the About us functionx
		break;
		
	default :
		delay(1);
		printf("\n\t\t\t\t\t\t            Be patient while we are Processing ...... ");
		delay(1);
		printf("\n\t\t\t\t\t\t             Invalid Input .... ");
		delay(1);
		printf("\n\t\t\t\t\t\t                Try Again  ");
		
	
}
}
	
	return 0;
}


// Now creatin the Function of About us
void aboutus()
	{
		delay(1);
		printf("\n\n\n           ------------------------------------------------------------------------------------------------------------------------\n\n\n");
		delay(1);
		printf("\t\t\t\t\t\t\t------------ About us ------------\n\n");
		// Creating The section forthe Detail of Created Games 
		printf("\n\t\t\tBattelship Game is a Paper pencil Games but to make More inserting and Adventures we had Added the Version where You \n\t\t\tCan Play With Computer ");
		printf("Where You can Enjoy By Plying The Game In E-version , This Game will creates More Fun while playing ,\n\t\t\tYou can Switch The Modes of Games \n");
		printf("\n\t\t\tThere Will be Total three Modes : \n\n");
		printf("\t\t\t     1. EASY Mode \n");
		printf("\t\t\t     2. MEDIUM Mode \n");
		printf("\t\t\t     3. HARD Mode \n");
		printf("\n\t\t\tBy using the Multiple Options You Can Play As You Wants So that You have Enjoy Well While playing The Games \n");
		printf("\t\t\tYou can Also acess to RULES AND REGULARTIONS section where You can Find the List a Rules For Playing Games\n");
		printf("\t\t\tYou Can Start Plying By Just Selecting the Option On Screen .......\n\n ");
		
		
		delay(1);
		printf("\n\t\t\t\t\t\t\t------------ Description of Game  ------------\n\n");
		// frist paragraph 
		printf("\n\t\t\tBattleship is a turn-based 2-player game.Each player has a 10x10  \n\t\t\tgrid where the ships are placed randomly.\n");
		printf("\t\t\tEach player fires in the   \n\t\t\tadverse grid and tries to sink their enemy's fleet in turns.\n");
		delay(1);
		// Second paragraph 
		printf("\n\t\t\tBattleship (also known as Battleships or Sea Battle[1]) is a strategy type guessing game for two players.\n"); 
		printf("\t\t\tIt is played on ruled grids (paper or board) on which each player's fleet of warships aremarked. \n");
		printf("\t\t\tThe locations of the fleets are concealed from the other player. Players alternate turns calling \n");
		printf("\t\t\tshots at the other player's ships, and the objective of the game is to destroy the opposing player's fleet.\n\n");
		
		//Thrird paragraph
		delay(1);
		printf("\t\t\tBattleship is known worldwide as a pencil and paper game which dates from World War I. It\n"); 
		printf("\t\t\twas published by various companies as a pad-and-pencil game in the 1930s and was released as\n"); 
		printf("\t\t\ta plastic board game by Milton Bradley in 1967. The game has spawned electronic versions, \n"); 
		printf("\t\t\tvideo games, smart device apps and a film.\n\n");
		delay(1);
		// Last Paragraph
		printf("\n\n\t\t\t\t\t\t------------ Developers Details ------------\n\n");
		printf("\n\t\t\t\t>> Shivam Dubey ( Main Developer )\n\n\n");
		printf("\n\t\t\t\t>> Aqsa shaikh ( Main Developer )\n\n\n");
		printf("\n\t\t\t\t>> Aayush Yadav ( Main Developer )\n\n\n");
		printf("\n\n\n\n");
	}

//creating the function for Setting option

void setting_tab()
	{
			printf("\n\n\n           ------------------------------------------------------------------------------------------------------------------------\n\n\n");
			printf("\n\t<- Go Back ( Enter 3 ) \t\t         -------------------- Setting -------------------  		\n");
			printf("\t\n\n");
			printf("\n\t\t\t\t\t		>  1. Change player Name \n");
			printf("\t\t\t\t\t		>  2. Mode of Game  \n");
			printf("\n\n\t\t\t\t\t\t >>>> Enter your choice ? ");
			scanf("%d",&setting_op);
			printf("\n\n\n");
				
		//while(1)
		//{ 
			switch(setting_op)
			{
				case 1:
					delay(1);
					players_setting();//Calling the setting functionx
					break;
				case 2:
					delay(1);
					printf("\n\n\t\t\t\t\t ----- Comming soon -----");
					break;
				case 3:
					delay(1);
					printf("\n\n\t\t\t\t\t\t\t ----- Wait Going Back   -----\n\n\n");
					delay(1);
					printf("\n\n\t\t\t\t\t\t\t ---------  .....  -----\n\n\n");
					break;
				default:
					printf(" Invalid input ");
					break;		
			}
	 	//}
	}
//creating the function for Players option

void players_setting()
{
	printf("\t\t\t\t\t         ------------- Changing The Player Name ----------  		\n\n\n");
	printf("\t\t\t\t\t\t>>>> Enter The Players name ? : " );
	scanf("%s",&player_name);
	printf("\n\n\t\t\t\t---------- Player Name Changed Sucessfully Scroll down to Check ---------- \n\n\n\n");
	
	
	
	
	
}

// creating a function for 
void help()
{
	delay(1);
	printf("\n\n\n           ------------------------------------------------------------------------------------------------------------------------\n\n\n");
	printf("\n\t<- Go Back ( Enter 3 ) \t\t         -------------------- HElP & FAQ'S -------------------  		\n\n\n\n");
			
	printf("\n\n\t\t\t 1. What is a matrix? \n");
	printf("\t\t\tANS:- A matrix is a rectangular array of numbers or symbols. It is a data structure that can be used to represent\n\t\t\t the game board in Battleship.");
	printf("\n ");
	printf("\n\t\t\t 2. How can matrices be used to represent the game board in Battleship? \n ");
	printf("\t\t\tANS:-Each cell in the matrix can represent a square on the game board. The numbers or symbols in the cells can represent\n\t\t\t the status of the square, such as whether it is empty, contains a ship, or has been hit.");
	printf("\n ");
	printf("\n\t\t\t 3. What are the different types of matrices that can be used to represent the game board in Battleship? \n");
	printf("\t\t\tANS:- The two most common types of matrices used to represent the game board in Battleship are:");
	printf("\n ");
	printf("\n ");
    printf("\t\t\t1D matrix: A 1D matrix can be used to represent a game board with a single row or column.");
    printf("\n ");
    printf("\t\t\t2D matrix:A 2D matrix can be used to represent a game board with multiple rows and columns.");
	printf("\n  ");
	printf("\n\t\t\t 4. What are the advantages of using matrices to represent the game board in Battleship? \n");
	printf("\t\t\tANS:- Matrices are a versatile data structure that can be used to represent a variety of data. They are also efficient\n\t\t\t in terms of storage and computation.");
	printf("\n");
	printf("\n\t\t\t 5. What are the disadvantages of using matrices to represent the game board in Battleship? \n");
	printf("\t\t\tANS:- Matrices can be difficult to visualize, especially for large game boards. They can also be inefficient if the game \n\t\t\tboard is sparse, meaning that most of the squares are empty");
	printf("\n");
	printf("\n\t\t\t 6. How can the efficiency of matrices be improved for sparse game boards?\n");
	printf("\t\t\tANS:- The efficiency of matrices can be improved for sparse game boards by using a sparse matrix. A sparse matrix is\n\t\t\t a matrix that has a lot of zeros. Sparse matrices can be stored and manipulated more efficiently than dense matrices.");
	printf("\n");
	printf("\n\t\t\t 7. How can the visualization of matrices be improved for large game boards?\n");
	printf("\t\t\tANS:- The visualization of matrices can be improved for large game boards by using a graphical user interface (GUI).\n\t\t\t A GUI can be used to display the matrix on a screen and allow the user to interact with it.");
	printf("\n");
	printf("\n\t\t\t 8. How can matrices be used to implement the rules of the Battleship game? \n");
	printf("\t\t\tANS:- The rules of the Battleship game can be implemented using matrices by tracking the status of each square on the \n\t\t\tgame board. For example, a 1D matrix can be used to track the status of the ships on the game board.");
	printf("\n");
	printf("\n\t\t\t 9. How can matrices be used to implement the gameplay of the Battleship game? \n");
	printf("\t\t\tANS:- The gameplay of the Battleship game can be implemented using matrices by tracking the firing of shots and the sinking\n\t\t\t of ships. For example, a 2D matrix can be used to track the firing of shots.");
	printf("\n");
	printf("\n\t\t\t 10. How can matrices be used to improve the AI of the Battleship game? \n");
	printf("\t\t\tANS:- Matrices can be used to improve the AI of the Battleship game by tracking the history of the game and using this \n\t\t\tinformation to make better decisions. For example, a 3D matrix \n\t\t\tcan be used to track the history of the game, where each layer of the matrix represents a different turn.");
	printf("\n");
	printf("\n\t\t\t 11. How can matrices be used to analyze the results of the Battleship game? \n");
    printf("\t\t\tANS:- Matrices can be used to analyze the results of the Battleship game by tracking the statistics of the game, such \n\t\t\tas the number of wins, losses, and draws. For example, a 4D matrix\n\t\t\t can be used to track the statistics of the game, where each layer of the matrix represents a different game mode.\n");
	printf("\n\t\t\t 12. What are some other applications of matrices in the Battleship game? \n");
	printf("\t\t\tANS:- Matrices can be used in other aspects of the Battleship game, such as:");
	printf("\n");
	printf("\t\t\t* Storing the game rules.");
	printf("\n");
	printf("\t\t\t* Generating random game boards.");
	printf("\n");
	printf("\t\t\t* Evaluating the strength of different strategies.");
	
	printf("\n\n\n\n");
	
	
	

}


// how to play section
void how_to_play()
{
	printf("\n\n\n");
	printf("\t\t\t\t\t\t\t------------ HOW TO PLAY BATTLESHIP GAME USING MATRICES ------------\n\n");
	
	printf("\n\t\t\t Battleship is a classic two player strategy game where players take turns trying to sink each other's fleet of ships.\n\t\t\t In this version, we'll use matrices to represent the game boards and ships. Here's a step-by-step guide on how_to_play\n\t\t\t Battleship with matrices");
	printf("\n\t\t\t SETUP ,Game Components: You will need a Battleship game board for each player, which is essentially a grid represented\n\t\t\t as a 2D matrix. Each player also has a set of ships to place on their board.\n");
	printf("\n\t\t\t Game Board: Each player's game board is typically a 2D matrix, commonly 10x10, where they will place their ships and track\n\t\t\t their shots. Each cell in the matrix represents a coordinate on the grid");
	printf("\n\t\t\t Ships: The standard Battleship set includes five ships for each player:\n");
	printf("\n\t\t\t     1. Aircraft Carrier (5 squares) \n");
	printf("\t\t\t     2. Battleship (4 squares) \n");
	printf("\t\t\t     3. Cruiser (3 squares)\n");
	printf("\t\t\t     4. Submarine (3 squares) \n");
	printf("\t\t\t     5. Destroyer (2 squares)\n\n");
	printf("\n\t\t\t Taking Turns: Players take turns firing shots at the opponent's grid by specifying the row and column coordinates. \n\t\t\t For example, (3, 5) refers to the cell in the 3rd row and 5th column. \n");
	printf("\n\t\t\t Hit or Miss: When a player fires a shot, the opponent checks their game board's corresponding cell. If there's a ship\n\t\t\t in that cell, it's a 'HIT'; otherwise, it's a 'MISS' Mark the result on the opponent's board.\n");
	printf("\n\t\t\t Marking the Grid: To keep track of the game, players should mark their board using symbols. For example, 'X'can represent\n\t\t\t a hit, and '0' can represent a miss. You can also mark the ship locations with \n\t\t\t different symbols to track their status.\n");
	printf("\n\t\t\t Sinking Ships: When all cells of a ship have been hit, it is considered 'sunk' Players should announce when they have sunk\n\t\t\t one of their opponent's ships.\n");
	
	
	
	
	printf("\n\t\t\t\t\t\t\t------------Winning the Game  ------------\n\n");
	
	printf("\n\t\t\t >>>> VICTORY : The game continues until one player's entire fleet is sunk. The player who sinks all of their opponent's ships first\n\t\t\t wins the game.\n");
	printf("\n\t\t\t >>>> STRATEGIES :\n\t\t\t USE COORDINATES SYSTEMATICALLY:Start by targeting different areas of the opponent's board systematically. \n\t\t\t For example, you can start with (0,0), (0,1), (0,2), and so on, to cover the \n\t\t\t entire grid over time.\n");
	printf("\n\t\t\t >>>> CONCENTRATE FIRE: Once you hit a ship, concentrate your fire on that area to sink it as quickly as possible. Also consider the\n\t\t\t size of the remaining ships to make educated guesses.");
	printf("\n\t\t\t >>>> BLUFFING: Occasionally, make random shots in areas where you have no ships. This can confuse your opponent's strategy. \n");
	printf("\n\t\t\t >>>> OPTIONAL RULES\n\t\t\t SPECIAL SHOTS: Introduce special shots like 'salvo' (multiple shots per turn), 'radar' (revealing a small area\n\t\t\t of the opponent's grid), or 'sonar' (revealing the location of one enemy\n\t\t\t ship) for added excitement.");
	printf("\n\t\t\t >>>> TIME LIMITS: To speed up the game, consider imposing time limits on each player's turn. \n");
	printf("\n\t\t\t >>>> CONCLUSION\n\t\t\t Playing Battleship using matrices adds a strategic element to the game while providing a clear representation of\n\t\t\t the playing field. It's a game of tactics, logical deduction, and a bit of\n\t\t\t luck. Gather a friend, set up your matrix-based game boards, and engage in an \n\t\t\t exciting naval battle!\n");
	printf("\n\t\t\t Have a great time playing Battleship with matrices! \n");
	printf("\n\t\t\t Feel free to customize this guide, add visuals, or adapt it for your audience as needed. Enjoy playing Battleship with the \n\t\t\t matrix-based approach!");
	printf("\n\n\n");

}

// this for the play section only created yestarday 10/09/2023

void delay(int second){

int milsec = 1000 * second;

clock_t startTime = clock();

while(clock() < (startTime + milsec));
}

void play_hard()
{
	delay(1);
	printf("\n\t\t\t\t\t\t\t------------ Lets Play Battelship  ------------\n\n\n");
	delay(1);
	printf("\n\t\t\t\t\t\t First Arrange The 5 Ship According To You In A Matrix \n");
	delay(1);
	printf("\n\t\t\t\t\t\t Enter the Place Where You want to Place The ship\n \n");
	delay(1);
	printf("\n\t\t\t\t\t\t e.g. 2 3 i.e  2nd Row and 3rd colum Your Ship will be placed  \n\n");
	delay(1);
	printf("\n\t\t\t\t\t\t Note : ");delay(1);
	delay(1);
	printf("While placing The Ship Do Not Enter Same Index ");
	delay(1);
	printf("\n\t\t\t\t\t\t if you entered the same Index then You will Loose Your 1 Ship vice versa \n\n\n\n");
	
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			
			user_board[i][j]='~';
			
		}
		
		
	}
	
	// Display the user The Board where HE wants to place The Ships 
	delay(1);
	printf("\t\t\t\t\t\t\t\t  0 1 2 3 4 5 6 7 8 9 \n");
	
	for(i=0;i<size;i++)
	{
		printf("\t\t\t\t\t\t\t\t%d ",num); // This is for the Linear Matrix 
		num++;
		
		for(j=0;j<size;j++)
		{
			
			printf("%c ",user_board[i][j]);	
		}
				printf("\n");

	} 
	num=0;
	// now Lets Give a Chance To user To Put The Ships accoring to Hme 
	for(k=1;k<=num_ship;k++)
	{
		
		delay(1);
		printf("\n\n\t\t\t\t\t\t Now put The Ship at Any Location ");
		delay(1);
		while(1)
		{
		
			delay(1);
			printf("\n\t\t\t\t\t\t Enter the Row from ( 0 - 9 ) : ");
			scanf("%d",&put_ship_row);
			delay(1);
			printf("\n\t\t\t\t\t\t Enter the Column from (0 - 9) : ");
			scanf("%d",&put_ship_column);
			
			// checking for the same input for 1 ship 
			
			
			if(put_ship_row>9 || put_ship_column>9)
			{
				delay(1);
				printf("\n\n\t\t\t\t\t\t Enter the vaild Input Again!!\n");
				
			}
			else if(put_ship_row<0 || put_ship_column<0)
			{
				delay(1);
				printf("\n\t\t\t\t\t\t Enter the vaild Row and Column Again !!");
			}
			else
			{
				user_board[put_ship_row][put_ship_column]='S';
				break;
			}
			
		
		}
		printf("\n\n");
		// after Placing the ships in Matrix by user Then display the Same 
		display_user_board();
		
	} 
	// when The User Will put The Ships On Specific Position Then Message That 
	delay(1);
	printf("\n\t\t\t\t\t\t All 5 Ships Are are Placed Sucessfully By You\n");
	delay(1);
	printf("\n\t\t\t\t\t\t Now Wait for The Computer \n");
	delay(1);
	printf("\n\t\t\t\t\t\t To Set The 5 Ship According To him \n");
	delay(1);
for(i=0;i<num_ship;i++)
{
	
	put_random_row=getRandomNumber( 0,  size-1);
	put_random_column= getRandomNumber(0,  size-1);
	
	// Now Assigning Ship a Particular loaction 
	computer_board[put_random_row][put_random_column]='S';
	delay(1.2);
	printf("\n\n\t\t\t\t\t\t Computer arranged its Ship %d at ....",i+1);
}
	delay(1.5);
	printf("\n\n\t\t\t\t\t\t All 5 Ships Are are Placed Sucessfully By Computer\n");
	
	while(player_hits < num_ship && computer_hits < num_ship )
	{
		target_computer();
		target_user();
		
		if(player_hits == num_ship)
		{
			delay(1);
			printf("\n\n\n\t\t\t\t\t\t Congratulation!! You won the game ");
		}
		else if(computer_hits == num_ship)
		{
			delay(1);
			printf("\n\t\t\t\t\t\t Bad Luck You Loss the Game Try again .... ");

		}
	}
		
	
	
}
// declaring the Functions 







void target_computer()
{
	delay(1);
	printf("\n\n");
	delay(1);
	printf("\n\t\t\t\t\t\t\t\t      Your Board \n");
	delay(1);
	display_user_board();
	//ctarget_row for Targetting the Row of Computer  ;
	//ctarget_column for targetting the column of Computer ;
	
	while(1)
	{
		delay(1);
		printf("\n\t\t\t\t\t\t Enter the Targeted Row : ");
		scanf("%d",&ctarget_row);
		delay(1);
		printf("\n\t\t\t\t\t\t Enter the Targeted Column : ");
		scanf("%d",&ctarget_column);
		if(ctarget_row>9 || ctarget_column>9 )
		{
			delay(1);
			printf("\n\t\t\t\t\t\t Invaild Row and Column Again  ");
			delay(1);
			printf("\n\t\t\t\t\t\t Enter the row and column between (0 - 9 ) ");
		}
		else if(ctarget_row<0 || ctarget_column<0 )
		{
			delay(1);
			printf("\n\t\t\t\t\t\t Invaild Row and Column \n");
			delay(1);
			printf("\n\t\t\t\t\t\t Enter the row and column between ( 0 - 9 )");
		}
		else
		{
			break;
			
		}
	}
	
	
	if(computer_board[ctarget_row][ctarget_column]=='S' )
	{
		delay(1);
		printf("\n\n\t\t\t\t\t\t >>>> You Hit");
		computer_board[ctarget_row][ctarget_column]='H';
		player_hits++;
	}
	else
	{
		delay(1);
	 	printf("\n\n\t\t\t\t\t\t >>>> You Miss");
		computer_board[ctarget_row][ctarget_column]='X';
    }
    
    
		
}	


void target_user()	
{
	//utarget_row; is USe to target The Users MAtrix by Computer Row 
	//utarget_column; is Use to target The userd matrix by column 
	printf("\n\n");
	utarget_row=getRandomNumber( 0,  size-1);
	delay(1);
	printf("\n\t\t\t\t\t\t Computer Entered the Row index .... %d ",utarget_row);
	utarget_column=getRandomNumber( 0,  size-1);
	delay(1);
	printf("\n\t\t\t\t\t\t Computer Entered the Column index .... %d ",utarget_column);

	
	if(user_board[utarget_row][utarget_column]=='S' )
	{
		delay(1);
		printf("\n\n\t\t\t\t\t\t >>>> Computer Hit");
		user_board[utarget_row][utarget_column]='H';
		computer_hits++;
	}
	else
	{
		delay(1);
	 	printf("\n\n\t\t\t\t\t\t >>>> Computer Miss");
		user_board[utarget_row][utarget_column]='X';
    }
    
	
}	

void display_user_board()
{
	num=0;
	printf("\t\t\t\t\t\t\t\t  0 1 2 3 4 5 6 7 8 9 \n");
	
	for(i=0;i<size;i++)
	{
		printf("\t\t\t\t\t\t\t\t%d ",num); // This is for the Linear Matrix 
		num++;
		
		for(j=0;j<size;j++)
		{
			
			printf("%c ",user_board[i][j]);	
		}
		printf("\n");

	} 
	
}	





