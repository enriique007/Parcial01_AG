#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
GLfloat x,y,i;
void PlanoCartesiano()
{
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	//Eje x izquierda
	glVertex2f(-3.0f, 0.0f);
	//Eje x derecha
	glVertex2f(3.0f, 0.0f);
	//Eje y arriba
	glVertex2f(0.0f, 3.0f);
	//Eje y abajo
	glVertex2f(0.0f, -3.0f);
}
void Coordenadas()
{
 glPointSize(3);
 glBegin(GL_POINTS);
 for (i=-3; i<=3;i+=0.1)   
    {  
		x=i;
			
       glVertex2f(x,0);
    }
    for (i=-3; i<=3;i+=0.1)
    {  
		y=i;
			
       glVertex2f(0,y);
    }
}

void circulo()
{
    glColor3f(1.0f, 1.0f, 1.0f); 
    //Declarando variables
    GLfloat angulo;
    float i;
    float x;
    float y;
    float r;
    glPointSize(3.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
       //For que hace referencia hasta donde se va a dibujar la circunferencia 
    for(i=0; i<360; i+=1)
    {
		//Convirtiendo grados a radianes
	    angulo = i*M_PI/180.0f; 
	    //Punto inicial en x para el centro de la circunferencia
	    x = 0.0;
	    //Punto inicial en y para el centro de la circunferencia
	    y = -0.55;
	    //Radio de la circunferencia
	    r=1.0;
	    //Pasando los radianes a cada vertices, haciendo uso del coseno y seno  e indicando el punto inicial de la circunferencia
		glVertex2f(r*2*cos(angulo)+x, r*sin(angulo)+y);
    }
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
       //For que hace referencia hasta donde se va a dibujar la circunferencia 
    for(i=0; i<360; i+=1)
    {
		//Convirtiendo grados a radianes
	    angulo = i*M_PI/180.0f; 
	    //Punto inicial en x para el centro de la circunferencia
	    x = -1.7;
	    //Punto inicial en y para el centro de la circunferencia
	    y = -1.20;
	    //Radio de la circunferencia
	    r=0.60;
	    //Pasando los radianes a cada vertices, haciendo uso del coseno y seno  e indicando el punto inicial de la circunferencia
		glVertex2f(r*1.2*cos(angulo)+x, r*sin(angulo)+y);
    }
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
       //For que hace referencia hasta donde se va a dibujar la circunferencia 
    for(i=0; i<360; i+=1)
    {
		//Convirtiendo grados a radianes
	    angulo = i*M_PI/180.0f; 
	    //Punto inicial en x para el centro de la circunferencia
	    x = 1.7;
	    //Punto inicial en y para el centro de la circunferencia
	    y = -1.20;
	    //Radio de la circunferencia
	    r=0.60;
	    //Pasando los radianes a cada vertices, haciendo uso del coseno y seno  e indicando el punto inicial de la circunferencia
		glVertex2f(r*1.2*cos(angulo)+x, r*sin(angulo)+y);
    }
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
       //For que hace referencia hasta donde se va a dibujar la circunferencia 
    for(i=0; i<360; i+=1)
    {
		//Convirtiendo grados a radianes
	    angulo = i*M_PI/180.0f; 
	    //Punto inicial en x para el centro de la circunferencia
	    x = -0.670;
	    //Punto inicial en y para el centro de la circunferencia
	    y = -1.75;
	    //Radio de la circunferencia
	    r=0.60;
	    //Pasando los radianes a cada vertices, haciendo uso del coseno y seno  e indicando el punto inicial de la circunferencia
		glVertex2f(r*1.2*cos(angulo)+x, r*1.1*sin(angulo)+y);
    }
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
       //For que hace referencia hasta donde se va a dibujar la circunferencia 
    for(i=0; i<360; i+=1)
    {
		//Convirtiendo grados a radianes
	    angulo = i*M_PI/180.0f; 
	    //Punto inicial en x para el centro de la circunferencia
	    x = 0.670;
	    //Punto inicial en y para el centro de la circunferencia
	    y = -1.75;
	    //Radio de la circunferencia
	    r=0.60;
	    //Pasando los radianes a cada vertices, haciendo uso del coseno y seno  e indicando el punto inicial de la circunferencia
		glVertex2f(r*1.2*cos(angulo)+x, r*1.1*sin(angulo)+y);
    }
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
//Circunferencia completa dentro de la figura
   //For que hace referencia hasta donde se va a dibujar la circunferencia 
    for(i=0; i<360; i+=1)
    {
		//Convirtiendo grados a radianes
	    angulo = i*M_PI/180.0f; 
	    //Punto inicial en x para el centro de la circunferencia
	    x = 0;
	    //Punto inicial en y para el centro de la circunferencia
	    y = 0.0;
	    //Radio de la circunferencia
	    r=0.5;
	    //Pasando los radianes a cada vertices, haciendo uso del coseno y seno  e indicando el punto inicial de la circunferencia
		glVertex2f(r*2.8*cos(angulo)+x, r*sin(angulo)+y);
    }
    glEnd();

}
void quads()
{
	glLineWidth(2);
    glBegin(GL_POLYGON);//figura
    glColor3f(0.0,0.0, 0.0);
    glVertex2f(-0.3f, -0.90f);//1
    glVertex2f(-0.3f,0.0f);//2
    glVertex2f(-0.1f,-0.2f);//3
    glVertex2f(0.1f,-0.2f);//4
    glVertex2f(0.3f, 0.0f);//1
    glVertex2f(0.3f,-0.90f);//2
	}

void display(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);//agregandole color a la ventana 
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);    
    circulo();
    glEnd();
    quads();
    glEnd();
    glFlush ();
	
	
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-3.0, 3.0, -3.0, 1.5, -3.0, 3.0); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (200, 200);
    glutCreateWindow ("Ejercicio 01 - Misael Juarez");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
