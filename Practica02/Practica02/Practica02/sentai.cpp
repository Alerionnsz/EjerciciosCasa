//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): PÉREZ TEPOX LUIS CARLOS*********************************//
//*************			GRUPO: 02 PRACTICA 02 EJERCICIO DE CASA								******//
//*************			VISUAL STUDIO 2017								******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f,0.0f, 0.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar

	///// SUPERIOR CASCO


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(-10.0f, 20.0f, 0.f);
	glVertex3f(10.0f, 20.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(10.0f, 0.0f, 0.0f);
	glVertex3f(-10.0f, 0.0f, 0.0f);
	glEnd();

	///// SUPERIOR CASCO IZQUERDA


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(-10.0f, 20.0f, 0.f);
	glVertex3f(-10.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(-18.0f, 0.0f, 0.0f);
	glVertex3f(-10.0f, 20.0f, 0.0f);
	glEnd();

	///// SUPERIOR CASCO DERECHA


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(10.0f, 20.0f, 0.f);
	glVertex3f(10.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(18.0f, 0.0f, 0.0f);
	glVertex3f(10.0f, 20.0f, 0.0f);
	glEnd();



	//CABEZA

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(-20.0f, 0.0f, 0.f);
	glVertex3f(20.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(20.0f, -30.0f, 0.0f);
	glVertex3f(-20.0f, -30.0f, 0.0f);
	glEnd();

	//CABEZA OJO IZQUIERDO

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.0f, 0.0f, 0.f);
	glVertex3f(18.0f, 0.0f, 0.0f);
	glVertex3f(18.0f, -30.0f, 0.0f);
	glVertex3f(-18.0f, -30.0f, 0.0f);
	glEnd();


	//BARBILLA

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.0f, -30.0f, 0.f);
	glVertex3f(18.0f, -30.0f, 0.0f);
	glVertex3f(0.0f, -60.0f, 0.0f);
	glVertex3f(-18.0f, -30.0f, 0.0f);
	glEnd();

	//BARBILLA WHITE

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.0f, -33.0f, 0.f);
	glVertex3f(15.0f, -33.0f, 0.0f);
	glVertex3f(0.0f, -55.0f, 0.0f);
	glVertex3f(-15.0f, -33.0f, 0.0f);
	glEnd();

	
	//BARBILLA 2

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(-5.0f, -50.0f, 0.f);
	glVertex3f(5.0f, -50.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(5.0f, -60.0f, 0.0f);
	glVertex3f(-5.0f, -60.0f, 0.0f);
	glEnd();


	//BARBILLA 3

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(-18.0f, -30.0f, 0.f);
	glVertex3f(0.0f, -58.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(-10.0f, -58.0f, 0.0f);
	glVertex3f(-18.0f, -30.0f, 0.0f);
	glEnd();

	//BARBILLA 4

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.90f, 0.0f);
	glVertex3f(18.0f, -30.0f, 0.f);
	glVertex3f(0.0f, -58.0f, 0.0f);
	glColor3f(0.0f, 0.70f, 0.0f);
	glVertex3f(10.0f, -58.0f, 0.0f);
	glVertex3f(18.0f, -30.0f, 0.0f);
	glEnd();


	///CUERNO IZQUIERDO
	glBegin(GL_POLYGON);
	glColor3f(0.70f,0.90f,0.0f);
	glVertex3f(-30.0f, 70.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, -45.0f, 1.0f);
	glVertex3f(-30.0f, 70.0f, 1.0f);



	glEnd();
	/// CUERNO DERECHO

	glBegin(GL_POLYGON);
	glColor3f(0.70f, 0.90f, 0.0f);
	glVertex3f(30.0f, 70.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, -45.0f, 1.0f);
	glVertex3f(30.0f, 70.0f, 1.0f);



	glEnd();


	
	/// INTERMEDIO	
	///CUERNOS
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.90f);
	glVertex3f(-2.0f, 0.0f, 1.0f);
	glVertex3f(2.0f, 0.0f, 1.0f);
	glVertex3f(2.0f, -15.0f, 1.0f);
	glVertex3f(-2.0f, -15.0f, 1.0f);
	glEnd();


	/// INTERMEDIO	IZQUIERDO
	///CUERNOS
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.90f);
	glVertex3f(-2.0f, 5.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.0f, 0.0f, 1.0f);
	glVertex3f(-2.0f, 5.0f, 1.0f);
	glEnd();

	/// INTERMEDIO	DERECHO
	///CUERNOS
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.90f);
	glVertex3f(2.0f, 5.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(2.0f, 0.0f, 1.0f);
	glVertex3f(2.0f, 5.0f, 1.0f);
	glEnd();

											

	glFlush();
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

	// Ortogonal
	glOrtho(-100,100,-100,100,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

