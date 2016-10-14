/*
txStop = void
txEndCloseWindow = txDisableAutoPause()*/
#include "TXlib.h"

#define please
#define meow main
#define txStop void
//                                                                                                                                                                                            #define txCloseWindow txDisableAutoPause
void Car(int x, int y);
void Dub(int x, int y);
void Bike (int x, int y, int r, int sizex, int sizey);
void BikeMove(int x, int y);
void Kirpichic (int x, int y, int size);
void CarMove (int x, int y);
//void CarMove_v2();
void KirpichicMove(int x, int y);
void KirpichicWithHands(int x, int y, int size);
void UFO(int x, int y);
void MoveUFO(int x, int y, int dir);
int meow ()

    {

        txCreateWindow (1600, 900);
        //BikeMove (1700, 470);

        MoveUFO(0, 300, 0);
        txSleep (3000);
        //KirpichicWithHands(1400, 500, 20);
        //txSleep (1000);

        //txCloseWindow();
       // txSleep (1000);
        KirpichicMove(1400, 500);
       //

        //CarMove_v2();
        txSleep (1000);


        txCloseWindow();

        return 0;
    }

////////////////////////////////////////////////////////////////////

void MoveUFO(int x, int y, int dir)
    {
    while (x < 1300)
        {


            txClear();
            txSetFillColour (TX_BLACK);
            txSetFillColour  (RGB  (8,37, 103));
            POINT Sky [6] = {{0, 0}, {1600, 0},  {1600, 550}, {230, 900}, {0, 900}, {0, 0 }};
            txPolygon (Sky, 6);
            txSetFillColour  (RGB  (40, 114, 51));
            POINT Ground [3] = {{1600, 550}, {230, 900},{1600, 900} };
            txPolygon (Ground, 3);
           txSetFillColour (TX_YELLOW);
            txCircle (50, 50, 30);
            txSetFillColour (TX_WHITE);
            txLine (230, 900, 1600, 550);

        UFO(x, y);
        if (dir <= 50)
        {
        x = x + 3 ;
        y = y - 1 ;
        txSleep(10);
        dir= dir + 1;

        }
        else
        {
        dir= dir + 1;
        x = x + 3 ;
        y = y + 1 ;
        txSleep(10);
        if (dir == 100)
        {
        dir = 0;
        };
        }
    }



 txSetColor (TX_BLACK);
txTextOut (100, 100, "H");
txSleep(300);
txTextOut (100, 100, "He");
txSleep(300);
txTextOut (100, 100, "Hel");
txSleep(300);
txTextOut (100, 100, "Hell");
txSleep(300);
txTextOut (100, 100, "Hello");
txSleep(300);
//txSetColor (TX_TRANSPARENT);
    }
////////////////////////////////////////////////////////////////////




void KirpichicMove (int x, int y)
    {
        txSleep(2000);
        int dir = 1;
        while ( x > 0 )
            {
                KirpichicWithHands ( x, y, 20);

                if ( dir == 1 )
                    {
                        x = x - 40;
                        y = y - 10;

                        txSleep(500);
                        dir = 0;
                    }
                else
                    {
                        x = x - 80;
                        y = y + 40;

                        txSleep(1);
                        dir = 1;
                    };

            txSetFillColour (TX_BLACK);
            txClear ();
            txSetFillColour  (RGB  (8,37, 103));
            POINT Sky [6] = {{0, 0}, {1600, 0},  {1600, 550}, {230, 900}, {0, 900}, {0, 0 }};
            txPolygon (Sky, 6);

            txSetFillColour  (RGB  (40, 114, 51));
            POINT Ground [3] = {{1600, 550}, {230, 900},{1600, 900} };
            txPolygon (Ground, 3);
            txSetFillColour (TX_YELLOW);
            txCircle (50, 50, 30);
            txSetFillColour (TX_WHITE);

            txLine (230, 900, 1600, 550);
            Dub(350, 600);
            Kirpichic (1450 ,490, 20);
            Kirpichic (1500 ,480, 30);
            Kirpichic (1550 ,470, 20);
            Kirpichic (1600 ,460, 20);





            /*

                txSleep(100);
                x = x - 10;
                y = y - 10;
                txSleep(100);
                x = x - 10;
                y = y - 10;
                txSleep(100);
                x = x - 10;
                y = y - 10;
                x = x - 1;
                x = x - 1;
                x = x - 1;
                y = y + 1;
            txSetFillColour (TX_BLACK);
            txClear ();
            txSetFillColour  (RGB  (8,37, 103));
            POINT Sky [6] = {{0, 0}, {1600, 0},  {1600, 550}, {230, 900}, {0, 900}, {0, 0 }};
            txPolygon (Sky, 6);
            txSetFillColour  (RGB  (40, 114, 51));
            POINT Ground [3] = {{1600, 550}, {230, 900},{1600, 900} };
            txPolygon (Ground, 3);
           txSetFillColour (TX_YELLOW);
            txCircle (50, 50, 30);
            txSetFillColour (TX_WHITE);
            txLine (230, 900, 1600, 550);
            */
            }

    }
////////////////////////////////////////////////////////////////////
//---------------------------------------------------------------------------
//{ I want to HIDE eat! ))))

void BikeMove (int x, int y)
    {


    while (x > -100)
        {
            Bike (x, y, 40, 50, 50);
            x = x - 4;
            y = y + 1;
            txSleep (2);

            txSetFillColour (TX_BLACK);
            txClear ();

            txSetFillColour  (RGB  (8,37, 103));
            POINT Sky [6] = {{0, 0}, {1600, 0},  {1600, 550}, {230, 900}, {0, 900}, {0, 0 }};
            txPolygon (Sky, 6);

            txSetFillColour  (RGB  (40, 114, 51));
            POINT Ground [3] = {{1600, 550}, {230, 900},{1600, 900} };
            txPolygon (Ground, 3);



            txSetFillColour (TX_YELLOW);
            txCircle (50, 50, 30);
            txSetFillColour (TX_WHITE);

            txLine (230, 900, 1600, 550);
            Kirpichic (1400 ,500, 20);

            Kirpichic (1450 ,490, 20);
            Kirpichic (1500 ,480, 30);
            Kirpichic (1550 ,470, 20);
            Kirpichic (1600 ,460, 20);
            txSetFillColour (RGB (184, 184, 184));

            txCircle(580, 80, 50);
            txCircle(730, 80, 50);
            txCircle(630, 70, 50);
            txCircle(530, 70, 50);
            txCircle(680, 80, 50);
            txSetFillColour (TX_WHITE);
            //Car (300, 700);
            Dub(350, 600);

        /*Bike (550, 505, 40, 50, 50);

        Bike (150, 300, 30, 50, 50);  */

        }
    }

void Bike (int x, int y, int r, int sizex, int sizey)

    {

        txSetColour (RGB (181, 184, 177), 5);
        txLine (x - 50 , y + 30, x - 40, y - 70); //вилка
        txLine (x - 45, y - 40, x + 50, y + 10); // нижн€€
        txLine (x - 45 , y - 40 , x + sizex, y -  sizey); //верхн€€  //
        txLine (x + 45 , y + 10 , x + sizex , y -  sizey); //подседел  //
        txLine (x + sizey, y -  sizey, x + 100, y - 10); // верхнее  //
        txLine (x + 100, y - 10 , x + 50, y + 10); // нижнее
        txSetFillColour (TX_TRANSPARENT);
        txCircle (x - 50, y + 30, r);
        txCircle (x + 100, y - 10 , r);
        txSetColour (RGB (255, 255, 255), 1);
        txSetFillColour (TX_WHITE);
    }
/*
x + 50, y -50
x + 100, y - 10
*/

//}
//---------------------------------------------------------------------------
//
 /*void CarMove_v2()
    {
        int t = 0;

        while (t <= 100)
            {
                if (kbhit()) break;

                txSetFillColour (TX_BLACK);
                txClear();

                txSetFillColour  (RGB  (8,37, 103));

                POINT Sky [6] = {{0, 0}, {1600, 0},  {1600, 550}, {230, 900}, {0, 900}, {0, 0 }};
                txPolygon (Sky, 6);

                txSetFillColour  (RGB  (40, 114, 51));
                POINT Ground [3] = {{1600, 550}, {230, 900},{1600, 900} };
                txPolygon (Ground, 3);

                txSetFillColour (TX_YELLOW);
                txCircle (50, 50, 30);
                txSetFillColour (TX_WHITE);

                txLine (230, 900, 1600, 550);

                Car (1700 - 16*t, 390 + 4*t);

                Car (1500 - 15*t, 380 + 4.1*t);
                Car (1000 - 14*t, 370 + 4.2*t);
                Car (1200 - 12*t, 350 + 3.9*t);
                Car (1100 - 13*t, 320 + 4.1*t);
                Car (1200 - 16*t, 310 + 4.2*t);
                Car (1100 - 17*t, 350 + 4.3*t);

                Kirpichic (1450 , 490 + t/50 % 2 * 10, 20);
                Kirpichic (1500 , 480 + t/20 % 2 * 10, 30);
                Kirpichic (1550 , 470 + t/30 % 2 * 10, 20);
                Kirpichic (1600 , 460 + t/70 % 2 * 10, 20);

                Dub (350, 600);

                txSleep (10);
                t++;
            }
    }
//
      */
void CarMove (int x, int y)
    {
        while (x > 0)
            {
                if (kbhit()) break;
                Car (x, y);
                x = x - 16;
                y = y + 4;
                txSleep (1);

                txSetFillColour (TX_BLACK);
                txClear();
                txSetFillColour  (RGB  (8,37, 103));

                POINT Sky [6] = {{0, 0}, {1600, 0},  {1600, 550}, {230, 900}, {0, 900}, {0, 0 }};
                txPolygon (Sky, 6);

                txSetFillColour  (RGB  (40, 114, 51));
                POINT Ground [3] = {{1600, 550}, {230, 900},{1600, 900} };
                txPolygon (Ground, 3);

                txSetFillColour (TX_YELLOW);
                txCircle (50, 50, 30);
                txSetFillColour (TX_WHITE);

                txLine (230, 900, 1600, 550);


                Kirpichic (1450 ,490, 20);
                Kirpichic (1500 ,480, 30);
                Kirpichic (1550 ,470, 20);
                Kirpichic (1600 ,460, 20);

                Dub(350, 600);
            }


    }
////////////////////////////////////////////////////////////////////

void Car(int x, int y)
    //900   600
    {
        //POINT CarInside [4] =  { {x + 100 , y }, {x + 100, y + 50 }, {x + 200, y + 50}, {x + 200, y }};
        //txPolygon (CarInside, 4);

        txCircle (x, y + 100, 40);
        txLine (x - 30 ,y + 100,x - 50, y + 100);
        txLine (x -50, y + 100, x - 50, y + 50);
        txLine (x - 50, y + 50, x + 50, y + 25);
        txLine (x + 50, y + 25, x + 100, y - 50);
        txLine (x + 100, y - 50, x + 200, y - 70);
        txLine (x + 200, y - 70, x + 250, y - 50);
        txLine (x + 250, y - 50, x + 260, y + 20);
        txLine (x + 260, y + 20, x + 240, y + 30);
        txCircle (x + 210, y + 45, 40);
        txLine (x, y + 100, x + 210, y + 40);

    }
////////////////////////////////////////////////////////////////////

 /*
void Car(int x, int y)
    //900   600
    {
        txCircle (x, y + 100, 40);
        txLine (x - 30 ,y + 100,x - 50, y + 100);
        txLine (x -50, y + 100, x - 50, y + 50);
        txLine (x - 50, y + 50, x + 50, y + 25);
        txLine (x + 50, y + 25, x + 100, y - 50);
        txLine (x + 100, y - 50, x + 200, y - 70);
        txLine (x + 200, y - 70, x + 250, y - 50);
        txLine (x + 250, y - 50, x + 260, y + 20);
        txLine (x + 260, y + 20, x + 240, y + 30);
        txCircle (x + 210, y + 45, 40);
        txLine (x, y + 100, x + 210, y + 40);
    }
    */




    //350   600
    void Dub(int x, int y)
    {
        txSetFillColour (TX_GREEN);
        txLine (x, y + 100, x, y + 300);
        txLine (x + 20, y + 100, x + 20, y + 300);
        txCircle (x - 10, y + 70, 40);
        txCircle (x - 10, y + 10, 40);
        txCircle (x + 20, y + 10, 40);
        txCircle (x + 20, y + 70, 40);
        txSetFillColour (TX_WHITE);
    }
////////////////////////////////////////////////////////////////////

    void Kirpichic (int x, int y, int size)
    {
        txSetFillColour (TX_RED);
        txLine(x, y, x, y + 100);
        txCircle (x, y, size);
        txSetFillColour (TX_WHITE);
        txRectangle (x - 10, y - 5, x + 10, y);
    }
////////////////////////////////////////////////////////////////////
    void KirpichicWithHands (int x, int y, int size)
    {
        txSetFillColour (TX_RED);
        txLine(x, y, x, y + 100);

        txLine(x, y + 20, x - 30 , y + 50 );
        txLine(x, y + 20, x + 30, y + 50);

        txCircle (x, y, size);
        txSetFillColour (TX_WHITE);
        txRectangle (x - 10, y - 5, x + 10, y);
    }
////////////////////////////////////////////////////////////////////
void UFO(int x, int y)
    {
    txSetFillColour (TX_GRAY);
    txCircle(x,y - 20 , 25 );
    POINT uFo [4] =  {{x - 60, y - 20}, {x + 60 , y - 20 }, {x + 40 , y + 20}, {x - 40 , y + 20}};
    txPolygon (uFo,4 );
    txSetFillColour(TX_RED);
    txCircle(x - 20,y  , 10 );
    txCircle(x ,y  , 10 );
    txCircle(x + 20,y  , 10 );
    txSetFillColour(TX_BLACK);

    }
////////////////////////////////////////////////////////////////////


//--//--//--//--//--//--//--//--//--//--//--//--//--//

/*txSetFillColour (TX_YELLOW);
        txCircle (50, 50, 30);
        txSetFillColour (TX_WHITE);

        txLine (300, 900, 1600, 550);
        Kirpichic (1400 ,500, 20);

        Kirpichic (1450 ,490, 20);
        Kirpichic (1500 ,480, 30);
        Kirpichic (1550 ,470, 20);
        Kirpichic (1600 ,460, 20);


        Dub(350, 600);
           */
        /*
        Bike (650, 705, 40, 60, 60);
        Bike (550, 505, 40, 50, 50);

        Bike (150, 300, 30, 50, 50);
        Car(900, 600);
        */
        /*
        int meow = 0;
        scanf ("%d", &meow);

        printf ("я котик и мое м€у = %d\n", meow);
        */



