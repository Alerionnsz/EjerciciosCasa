//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Pérez Tepox Luis Carlos*********************************//
//*************		Grupo: 02  Práctica 5 Visual Studio 2017								******//
//*************		Ejercicio de Casa									******//
//*************       LAS TECLAS DE MOVIEMIENTO SON  A Y D´PARA EL EJE X**********************************************//
//*************       LAS TECLAS DE MOVIEMIENTO SON  W Y S´PARA EL EJE Z**********************************************//
//*************       LAS TECLAS DE MOVIEMIENTO SON  Q Y E ´PARA EL EJE Y**********************************************//
//*************				EL HOMBRO ROTA CON LA TECLA O							******//
//*************				EL CODO ROTA CON LA TECLA P								******//
//*************				LA MUÑECA ROTA CON LA TECLA I							******//
//*************				LOS DEDOS ROTAN CON LA TECLA U							******//
//************************************************************//

#include "Main.h"

float px = 0.5;
float py = 0.5;
float transZ;
float transX;
float transY;
float angleX;
float angleY;
float angleZ;
float angCodo = 0.0f;
float angHom = 0.0f;
float angMu = 0.0f;
float angPu1 = 0.0f;





int screenW = 0.0;
int screenH = 0.0;


void InitGL ( void )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma3(void)
{

	GLfloat vertice[8][3] = {
				{px ,-py, 0.5},    //Coordenadas Vértice 0 V0
				{-px ,-py, 0.5},    //Coordenadas Vértice 1 V1
				{-px ,-py, -0.5},    //Coordenadas Vértice 2 V2
				{px ,-py, -0.5},    //Coordenadas Vértice 3 V3
				{px ,py, 0.5},    //Coordenadas Vértice 4 V4
				{px ,py, -0.5},    //Coordenadas Vértice 5 V5
				{-px ,py, -0.5},    //Coordenadas Vértice 6 V6
				{-px ,py, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			glColor3f(1.0,0.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glColor3f(0.0,0.0,1.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glColor3f(0.0,1.0,0.0);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glColor3f(1.0,1.0,1.0);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glColor3f(0.4,0.2,0.6);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glColor3f(0.8,0.2,0.4);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
#if 0
	glTranslatef(transX, transY, transZ);
	glTranslatef(-5.0f, 0.0f, -10.0f);
	glRotatef(angleX, 1, 0, 0);
	glRotatef(angleY, 0, 1, 0);
	glRotatef(angleZ, 0, 0, 1);

	//Poner Código Aquí.
	prisma();

	glTranslatef(5.0f, 0.0f, 0.0f);
	prisma();

	glTranslatef(1.0f, 0.0f, 0.0f);
	glRotatef(-90, 0, 1, 0);
	prisma();

	glRotatef(90, 0, 1, 0);
	glTranslatef(1.0f, 0.0f, 0.0f);
	glRotatef(-180, 0, 1, 0);
	prisma();

	glRotatef(180, 0, 1, 0);
	glTranslatef(-1.5f, 1.0f, 0.0f);
	glRotatef(-270, 0, 1, 0);
	prisma();

	glRotatef(270, 0, 1, 0);
	glTranslatef(1.0f, 0.0f, 0.0f);
	glRotatef(-90, 1, 0, 0);
	prisma();

	glRotatef(90, 1, 0, 0);
	glTranslatef(-0.5f, 1.0f, 0.0f);
	glRotatef(90, 1, 0, 0);
	prisma();

#endif // 0

	///  HEAD
	glTranslatef(transX, transY, transZ);
	glTranslatef(0.0f,0.0f,-10.0f);
	glRotatef(angleX, 1, 0, 0);
	glRotatef(angleY, 0, 1, 0);
	glRotatef(angleZ, 0, 0, 1);
	prisma();


	//	NECK
	glPushMatrix();
	glTranslatef(0.0f, -0.75f, 0.0f);
	glScalef(0.5f, 0.5f, 0.5f);
	prisma();
	glPopMatrix();

	//	CHEST
	glPushMatrix();
	glTranslatef(0.0f, -2.0f, 0.0f);
	glScalef(2.0f,2.0f, 2.0f);
	prisma();
	glPopMatrix();

	//	CINTURA
	glPushMatrix();
	glTranslatef(0.0f, -3.25f, 0.0f);
	glScalef(1.80f, 0.5f, 1.0f);
	prisma();
	glPopMatrix();


	//L LEG
	glPushMatrix();
	glTranslatef(-0.70f, -5.0f, 0.0f);
	glScalef(0.8, 3.0f, 1.0f);
	prisma();
	glPopMatrix();


	//L LEG
	glPushMatrix();
	glTranslatef(0.70f, -5.0f, 0.0f);
	glScalef(0.8, 3.0f, 1.0f);
	prisma();
	glPopMatrix();

	//L FOOT
	glPushMatrix();
	glTranslatef(-0.70f, -6.75f, 0.0f);
	glScalef(1.0, 0.5f, 1.0f);
	prisma();
	glPopMatrix();

	//R FOOT
	glPushMatrix();
	glTranslatef(0.70f, -6.75f, 0.0f);
	glScalef(1.0, 0.5f, 1.0f);
	prisma();
	glPopMatrix();


	// L ARM
	glPushMatrix();
	glTranslatef(-1.50f, -1.75f, 0.0f);
	glScalef(1.0, 0.8f, 1.0f);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.50f, -1.75f, 0.0f);
	glScalef(1.0, 0.8f, 1.0f);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.50f, -2.55f, 0.0f);
	glScalef(1.0, 0.8f, 1.0f);
	prisma();
	glPopMatrix();

	// R ARM
///  SHOULDER
	glPushMatrix();
	glScalef(0.5f, 0.5f, 0.5f);
	glTranslatef(2.5f, -2.50f, 0.0f);
	glRotatef(angHom, 0, 0, 1);

	glColor3f(1.0, 1.0, 0.0);
	prisma();

	glPushMatrix();
	glScalef(3.3333f, 1.0f, 1.0f);
	glTranslatef(0.65f, 0.0f, 0.0f);
	glScalef(1.0f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 0.0);
	prisma();
	glPopMatrix();


	// CODO
	glPushMatrix();

	glScalef(3.3333f, 1.0f, 1.0f);
	glTranslatef(1.25f, 0.0f, 0.0f);

	glScalef(0.2f, 1.0f, 1.0f);
	glRotatef(angCodo, 0, -1, 0);//articulacion codo

	glColor3f(1.0, 1.0, 1.0);
	prisma();


	// ARM
	glPushMatrix();
	glScalef(5.0f, 1.0f, 1.0f);
	glTranslatef(0.55f, 0.0f, 0.0f);
	glScalef(0.9f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 1.0);
	prisma();
	glPopMatrix();


	// WRIST
	glPushMatrix();
	glScalef(5.0f, 1.0f, 1.0f);
	glTranslatef(1.05f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glRotatef(angMu, 0, 1, 0);

	glColor3f(1.0, 0.5, 0.40);
	prisma();


	// PALM
	glPushMatrix();
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.25f, 0.0f, 0.0f);
	glScalef(0.4f, 1.0f, 1.0f);
	glColor3f(0.10, 0.5, 0.40);
	prisma();
	glPopMatrix();


	// THUMB
	glPushMatrix();
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.4f, 0.65f, 0.35f);
	glScalef(0.1f, 0.30f, 0.35f);
	glRotatef(angPu1 * 2, -1, 0, 0);
	glColor3f(0.10, 0.5, 1.0);
	prisma();
	// THUMB
	glTranslatef(0.0f, 1.0f, 0.0f);
	glColor3f(0.80, 0.5, 1.0);
	prisma();

	glPopMatrix();

	// INDEX
	glPushMatrix();
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.65f, 0.44f, 0.35f);
	glScalef(0.4f, 0.12f, 0.35f);
	glRotatef(angPu1 * 2, 0, 1, 0);
	glColor3f(1.0, 0.5, 1.0);
	prisma();

	// INDEX
	glScalef(2.5f, 1.0f, 1.0f);
	glTranslatef(0.25f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 0.0);
	prisma();


	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.1f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 1.0, 0.0);
	prisma();

	glPopMatrix();




	// MID
	glPushMatrix();
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.75f, 0.21f, 0.35f);
	glScalef(0.6f, 0.12f, 0.3f);
	glRotatef(angPu1 * 2, 0, 1, 0);

	glColor3f(1.0, 0.5, 1.0);
	prisma();

	glScalef(1.666f, 1.0f, 1.0f);
	glTranslatef(0.35f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 0.0);
	prisma();


	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.1f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 1.0, 0.0);
	prisma();

	glPopMatrix();




	// INDEX
	glPushMatrix();
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.65f, -0.13f, 0.35f);
	glScalef(0.4f, 0.12f, 0.35f);
	glRotatef(angPu1 * 2, 0, 1, 0);
	glColor3f(1.0, 0.5, 1.0);
	prisma();

	// INDEX
	glScalef(2.5f, 1.0f, 1.0f);
	glTranslatef(0.25f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 0.0);
	prisma();


	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.1f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 1.0, 0.0);
	prisma();

	glPopMatrix();


	// PINKIE
	glPushMatrix();
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.60f, -0.44f, 0.35f);
	glScalef(0.3f, 0.12f, 0.3f);
	glRotatef(angPu1 * 2, 0, 1, 0);

	glColor3f(1.0, 0.5, 1.0);
	prisma();
	// PINKIE
	glScalef(3.33333f, 1.0f, 1.0f);
	glTranslatef(0.2f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 0.0);
	prisma();

	//PINKIE
	glScalef(10.0f, 1.0f, 1.0f);
	glTranslatef(0.1f, 0.0f, 0.0f);
	glScalef(0.1f, 1.0f, 1.0f);
	glColor3f(1.0, 1.0, 0.0);
	prisma();

	glPopMatrix();

	glPopMatrix();
	glPopMatrix();

	glPopMatrix();


		
  											
  glutSwapBuffers ( );
  // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		break;

	case 'a':
	case 'A':
		transX += 0.2f;
		break;

	case 'q':
	case 'Q':
		transY += 0.2f;
		break;
	case 'E':
	case 'e':
		transY -= 0.2f;
		break;
	case 'p':
		if (angCodo < 90)
			angCodo += 0.5f;
		break;
	case 'P':
		if (angCodo > 0)
			angCodo -= 0.5f;
		break;

	case 'o':
		if (angHom < 90)
			angHom += 0.5f;
		break;
	case 'O':
		if (angHom > -90)
			angHom -= 0.5f;
		break;

	case 'i':
		if (angMu < 45)
			angMu += 0.5f;
		break;
	case 'I':
		if (angMu > -30)
			angMu -= 0.5f;
		break;

	case 'U':
		if (angPu1 > -45)
			angPu1 -= 0.5f;
		break;
	case 'u':
		if (angPu1 < 0)
			angPu1 += 0.5f;
		break;



	case 'd':
	case 'D':
		transX -= 0.2f;
		break;

		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...

		angleX += 0.5;
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 0.5;

		break;
	case GLUT_KEY_LEFT:
		angleY += 0.5;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 0.5;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 4"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



