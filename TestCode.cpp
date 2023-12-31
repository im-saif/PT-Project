#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x, y;

	//Create Input and Output objects to test
	Output* pOut = new Output();
	Input* pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;

	/// 2.1- Rectangle Test ///
	/// =================== 
	{
		pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click

		// 2.1.1 - Drawing non-filled rectangle
		pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
		
		pIn->GetPointClicked(P1.x, P1.y);
		pIn->GetPointClicked(P2.x, P2.y);

		gfxInfo.BorderWdth = 5;
		gfxInfo.DrawClr = BLACK;	//any color for border
		gfxInfo.isFilled = false;	//Figure is NOT filled
		pOut->DrawRect(P1, P2, gfxInfo, false);

		// 2.1.2 - Drawing highlighted non-filled rectangle
		pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawRect(P1, P2, gfxInfo, true);


		// 2.1.3 - Drawing a filled rectangle
		pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
		pIn->GetPointClicked(P1.x, P1.y);
		pIn->GetPointClicked(P2.x, P2.y);


		gfxInfo.BorderWdth = 6;
		gfxInfo.DrawClr = BLUE;	//any color for border
		gfxInfo.FillClr = GREEN;//any color for filling
		gfxInfo.isFilled = true;//Figure is filled
		pOut->DrawRect(P1, P2, gfxInfo, false);


		// 2.1.4 - Drawing a highlighted filled rectangle
		pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawRect(P1, P2, gfxInfo, true);



		pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->ClearDrawArea();
	}
	/// 2.2- Square Test ///
	/// ============== 
	{
		pOut->PrintMessage("Drawing a Square, normal and Highlighted, Click to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click

		// 2.2.1 - Drawing non-filled square
		pOut->PrintMessage("Drawing a Square ==> non-filled,  Click one point center of the square");
		pIn->GetPointClicked(P1.x, P1.y);


		gfxInfo.BorderWdth = 5;
		gfxInfo.DrawClr = BLACK;	//any color for border
		gfxInfo.isFilled = false;	//Figure is NOT filled
		pOut->DrawSqr(P1, gfxInfo, false);

		// 2.2.2 - Drawing highlighted non-filled square
		pOut->PrintMessage("Drawing a square ==> Highlighted non-filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawSqr(P1, gfxInfo, true);


		// 2.2.3 - Drawing a square
		pOut->PrintMessage("Drawing a Square ==> filled,  Click one point center of the square");
		pIn->GetPointClicked(P1.x, P1.y);

	
		gfxInfo.BorderWdth = 6;
		gfxInfo.DrawClr = BLUE;	//any color for border
		gfxInfo.FillClr = GREEN;//any color for filling
		gfxInfo.isFilled = true;//Figure is filled
		pOut->DrawSqr(P1, gfxInfo, false);


		// 2.2.4 - Drawing a highlighted filled square
		pOut->PrintMessage("Drawing a Square ==> Highlighted filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawSqr(P1, gfxInfo, true);


		pOut->PrintMessage("Drawing a Square Test ==> OK,  Click anywhere to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->ClearDrawArea();
	}
	/// 2.3- Triangle Test ///
	/// =================== 
	{
		pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click


		// 2.2.1 - Drawing non-filled triangle
		pOut->PrintMessage("Drawing a Triangle ==> non-filled,  Click three points");
		pIn->GetPointClicked(P1.x, P1.y);
		pIn->GetPointClicked(P2.x, P2.y);
		pIn->GetPointClicked(P3.x, P3.y);


		gfxInfo.BorderWdth = 5;
		gfxInfo.DrawClr = BLACK;	//any color for border
		gfxInfo.isFilled = false;	//Figure is NOT filled
		pOut->DrawTri(P1, P2, P3, gfxInfo, false);

		// 2.3.2 - Drawing highlighted non-filled triangle
		pOut->PrintMessage("Drawing a Triangle ==> Highlighted non-filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawTri(P1, P2, P3, gfxInfo, true);


		// 2.3.3 - Drawing a filled triangle
		pOut->PrintMessage("Drawing a Triangle ==> filled,  Click three points");
		pIn->GetPointClicked(P1.x, P1.y);
		pIn->GetPointClicked(P2.x, P2.y);
		pIn->GetPointClicked(P3.x, P3.y);


		gfxInfo.BorderWdth = 6;
		gfxInfo.DrawClr = BLUE;	//any color for border
		gfxInfo.FillClr = TURQUOISE;//any color for filling
		gfxInfo.isFilled = true;//Figure is filled
		pOut->DrawTri(P1, P2, P3, gfxInfo, false);


		// 2.3.4 - Drawing a highlighted filled rectangle
		pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawTri(P1, P2, P3, gfxInfo, true);


		pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->ClearDrawArea();
	}
	/// 2.4- Hexagon Test ///
	/// =================== 
	{
		pOut->PrintMessage("Drawing a Hexagon, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click

		// 2.2.1 - Drawing non-filled Hexagon
		pOut->PrintMessage("Drawing a Hexagon ==> non-filled,  Click one point center of the Hexagon");
		pIn->GetPointClicked(P1.x, P1.y);



		gfxInfo.BorderWdth = 5;
		gfxInfo.DrawClr = BLACK;	//any color for border
		gfxInfo.isFilled = false;	//Figure is NOT filled
		pOut->DrawHex(P1, gfxInfo, false);

		// 2.2.2 - Drawing highlighted non-filled Hexagon
		pOut->PrintMessage("Drawing a Hexagon ==> Highlighted non-filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawHex(P1, gfxInfo, true);


		// 2.2.3 - Drawing a square
		pOut->PrintMessage("Drawing a Hexagon ==> filled,  Click one point center of the Hexagon");
		pIn->GetPointClicked(P1.x, P1.y);


		gfxInfo.BorderWdth = 6;
		gfxInfo.DrawClr = BLUE;	//any color for border
		gfxInfo.FillClr = PINK;//any color for filling
		gfxInfo.isFilled = true;//Figure is filled
		pOut->DrawHex(P1, gfxInfo, false);


		// 2.2.4 - Drawing a highlighted filled square
		pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawHex(P1, gfxInfo, true);


		pOut->PrintMessage("Drawing a Hexagon Test ==> OK,  Click anywhere to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->ClearDrawArea();

		pOut->PrintMessage("Drawing a Hexagon Test ==> OK,  Click anywhere to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->ClearDrawArea();
	}

	/// 2.5- Circle Test ///
	/// =================== 
	{
		pOut->PrintMessage("Drawing a Circle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click


		// 2.5.1 - Drawing non-filled circle
		pOut->PrintMessage("Drawing a circle ==> non-filled,  Click 1 point of center and 1 for the radius");
		pIn->GetPointClicked(P1.x, P1.y);
		pIn->GetPointClicked(P2.x, P2.y);


		gfxInfo.BorderWdth = 5;
		gfxInfo.DrawClr = BLACK;	//any color for border
		gfxInfo.isFilled = false;	//Figure is NOT filled
		pOut->DrawCirc(P1, P2, gfxInfo, false);

		// 2.5.2 - Drawing highlighted non-filled circle
		pOut->PrintMessage("Drawing a Circle ==> Highlighted non-filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawCirc(P1, P2, gfxInfo, true);


		// 2.5.3 - Drawing a filled circle
		pOut->PrintMessage("Drawing a Circle ==> filled,  Click 1 point of center and 1 for the radius");
		pIn->GetPointClicked(P1.x, P1.y);
		pIn->GetPointClicked(P2.x, P2.y);


		gfxInfo.BorderWdth = 6;
		gfxInfo.DrawClr = BLUE;	//any color for border
		gfxInfo.FillClr = GREEN;//any color for filling
		gfxInfo.isFilled = true;//Figure is filled
		pOut->DrawCirc(P1, P2, gfxInfo, false);


		//2.5.4 - Drawing a highlighted filled circle
		pOut->PrintMessage("Drawing a Circle ==> Highlighted filled, Click to Highlight");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->DrawCirc(P1, P2, gfxInfo, true);



		pOut->PrintMessage("Drawing a Circle Test ==> OK,  Click anywhere to continue");
		pIn->GetPointClicked(x, y);	//Wait for any click
		pOut->ClearDrawArea();
	}

	pOut->PrintMessage("Play mode toolbar test,  Click anywhere to continue"); // testing play mode toolbar
	pIn->GetPointClicked(x, y);
	pOut->CreatePlayToolBar();

	pOut->PrintMessage("Color mode toolbar test,  Click anywhere to continue"); // testing color mode toolbar
	pIn->GetPointClicked(x, y);
	pOut->CreateColorToolBar();
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	

	pOut->PrintMessage("Testing Input ability to read strings");

	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	// 2- After reading the string clear the status bar
	// 3- print on the status bar "You Entered" then print the string

	string UserText = "You entered " + pIn->GetSrting(pOut);
	pOut->PrintMessage(UserText);

	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");
	pIn->GetPointClicked(x, y);	//Wait for any click

	ActionType ActType;

	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:
			pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
			break;

		case DRAW_SQUARE:
			pOut->PrintMessage("Action: Draw a square, Click anywhere");
			break;

		case DRAW_TRIANGLE:
			pOut->PrintMessage("Action: Draw a triangle, Click anywhere");
			break;

		case DRAW_HEXAGON:
			pOut->PrintMessage("Action: Draw a hexagon, Click anywhere");
			break;

		case DRAW_CIRCLE:
			pOut->PrintMessage("Action: Draw a circle, Click anywhere");
			break;

		case TO_SELECT:
			pOut->PrintMessage("Action: Select figure, Click anywhere");
			break;

		case TO_CHANGE_DRAW_COLOR:
			pOut->PrintMessage("Action: Change Draw Color, Click anywhere");
			pOut->CreateColorToolBar();
			break;

		case TO_CHANGE_FILL_COLOR:
			pOut->PrintMessage("Action: Change Fill Color, Click anywhere");
			pOut->CreateColorToolBar();
			break;

		case TO_DELETE:
			pOut->PrintMessage("Action: Delete figure, Click anywhere");
			break;

		case TO_MOVE:
			pOut->PrintMessage("Action: Move figure, Click anywhere");
			break;

		case CHOOSE_COLOR_RED:
			pOut->PrintMessage("Action: Choose red color, Click anywhere");
			pOut->CreateDrawToolBar();
			break;

		case CHOOSE_COLOR_BLUE:
			pOut->PrintMessage("Action: Choose blue color, Click anywhere");
			pOut->CreateDrawToolBar();
			break;

		case CHOOSE_COLOR_GREEN:
			pOut->PrintMessage("Action: Choose green color, Click anywhere");
			pOut->CreateDrawToolBar();
			break;

		case CHOOSE_COLOR_ORANGE:
			pOut->PrintMessage("Action: Choose orange color, Click anywhere");
			pOut->CreateDrawToolBar();
			break;

		case CHOOSE_COLOR_YELLOW:
			pOut->PrintMessage("Action: Choose yellow color, Click anywhere");
			pOut->CreateDrawToolBar();
			break;

		case CHOOSE_COLOR_BLACK:
			pOut->PrintMessage("Action: Choose black color, Click anywhere");
			pOut->CreateDrawToolBar();
			break;

		case TO_UNDO:
			pOut->PrintMessage("Action: Undo, Click anywhere");
			break;

		case TO_REDO:
			pOut->PrintMessage("Action: Redo, Click anywhere");
			break;

		case TO_CLEAR_ALL:
			pOut->PrintMessage("Action: Clear all, Click anywhere");
			break;

		case TO_START_RECORDING:
			pOut->PrintMessage("Action: Start Recording, Click anywhere");
			break;

		case TO_STOP_RECORDING:
			pOut->PrintMessage("Action: Stop Recording, Click anywhere");
			break;

		case TO_PLAY_RECORDING:
			pOut->PrintMessage("Action: Play Recording, Click anywhere");
			break;

		case TO_SAVE_GRAPH:
			pOut->PrintMessage("Action: Save Graph, Click anywhere");
			break;

		case TO_LOAD_GRAPH:
			pOut->PrintMessage("Action: Load Graph, Click anywhere");
			break;

		case STATUS:
			pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
			break;

		case DRAWING_AREA:
			pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
			break;

		case EMPTY:
			pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
			break;

		case TO_DRAW:
			pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
			pOut->CreateDrawToolBar();
			break;

		case TO_PLAY:
			pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
			pOut->CreatePlayToolBar();
			break;

		case PICK_FIG_TYPE:
			pOut->PrintMessage("Action: Play Mode: Pick figure type! Click anywhere");
			break;

		case PICK_FIG_FILL_COLOR:
			pOut->PrintMessage("Action: Play Mode: Pick figure fill color! Click anywhere");
			break;

		case PICK_FIG_TYPE_AND_FILL_COLOR:
			pOut->PrintMessage("Action: Play Mode: Pick figure type and fill color! Click anywhere");
			break;

			///TODO: Add more cases for the other action types


		case TO_EXIT:
			break;
		}
	} while (ActType != TO_EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x, y);


	delete pIn;
	delete pOut;
	return 0;
}


