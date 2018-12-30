#define FILENAME0 "EVIL.bmp"  



void writePoints(char *string,float x,float y,float z);
void writeMessage(char *string,float x,float y,float z) ;
void writeMessage1(char *string,float x,float y,float z) ;
void writeMessage2(char *string,float x,float y,float z) ;
void writeName(char *string,float x,float y,float z);


char poruka[] = "YOU WIN: ";
char porukaa[] = "points";
char kraj[]="YOU LOSE";
char name[] = "Natalija Stanojevic";


 int indkiator_za_kraj=0;//da smo pobedili
 
static GLuint names[2];// za teksture
static float matrix[16];

float rezultat=0;//potrebno za ubijanje Boss kokoske ^_^



int indikator_za_kraj=0;//da nas je ubio neprijatelj
static void initialize(void);

int Kill_the_boos();//fja koja ubija glavnu kokosku

static void initPlanets();  

static void Init_Inidkator_For_Draw_Enemy();//inicijalizuje niz na Ind_Draw_Enemy 1 samo jedanput na pocetku
static void Init_Indikator_For_Bullet();//inicijalizuje niz Ind_Bullet_isNot_Empty na pocetku samo jednom
static void initialize_bullet_arry(int id);// menja niy Ind_Bullet_isNot_Empty u zavisnosti od toga da li je pogodjen
static void Add_Points(float tmp,float tmp1);

int unisten=0;//indikator da je metak unisten kad pogodi jednog neprijatelja
float Y_coor_of_Player=(-0.9);
int points=0;//Povecavaju se kada igrac dohvati paketic
int ind_Kill_player=0;// kada nas metak pog   odi ovo postaje jedan i onda ne iscrtavamo igraca (ubijen je) TODO da pise da smo izgubili i da na 'R' moramo da krenemo ispocetka


static void Enemy_kill_you(float XBE,float YBE);//Proverava da li su koordinate igrace iste kao koordinate metkica koje su isplalili neprijatelji ako jesu treba da ubijemo igraca

int Win();//proverava da li su svi neprijatelji ubijeni kada jesu signalizira da smo pobedili



int Ind_Draw_Enemy[37];// niz  za iscrtavanje neprijatelja
int Ind_Bullet_isNot_Empty[37]; // niz koji za odredjivanje da li je metak prazan ili ne
int Ind_save_index[37]; // pomocni niz da omogucimo ubijanje jednog neprijatelja jednim metkom

int not_init=1;//da nizove inicalizuje samo jednom
int not_init1=1;


static int check_x_coor_gifts(float x);
static int check_y_coor_gifts(float y);




int bullet=0; //indikator da li je metak ispaljen
int indikator=0;
int animation_ongoing;// da li je animacija pokrenuta
int window_width=400; //sirina prozora
int window_height=400; //visina prozora

float X_coor_of_Bullet=0; // x koordinata metka
float Y_coor_of_Bullet=-0.8; // y koordinata metka

float x_coor=-0.8;//ovo je koordinata neprijatelja koja se po potrebi menja u timer3



float y_t=0;//koordinate za ispaljivanje metkova protivnika imamo * metkova i koji su random rasporedjeni medju neprijateljim
float y_t1=0;//neprijatelj dok god postoji ispaljuje metak kada ga mi pogodimo treba da nestane i metak i proivnik
float y_t2=0;// ako taj protivnik ima metak
float y_t3=0;
float y_t4=0;
float y_t5=0;
float y_t6=0;
float y_t7=0;

float y_t8=0;
float y_t9=0;

float animation_parametars=0;// da rotiramo sunce

float xr=0;//kooordinate za pomeranje igraca
float yr=0;

float wait=0;
float wait1=0;
float wait2=0;
float wait3=0;
float wait4=0;
float wait5=0;
float wait6=0;
float wait7=0;
float wait8=0;//pomocne koje nam pomazu da metkici neprijatelja cekaju neko vreme pre nego sto budu ispaljeni

float gifts1=5;
float gifts2=3;
float gifts3=7;
float gifts4=9;
float gifts5=12;
float gifts6=22;
float gifts7=19;
float gifts8=14;
float gifts9=18; // pomocne za poklone koji ce padati u nekom trenutku


static void on_display(void);
static void on_keyboard(unsigned char key, int x, int y);
static void on_reshape(int width, int height);

static void on_timer_move_bullet(int value);//bullet
static void on_timer_move_enemy(int value);//za pomeranje protivnika levo desno
static void on_timer_show_gifts(int value);//za poklone da padaju u razlicitom vremenskom intervalu dodati kada se poklope koordinate poklona i igraca da se points uveca 
//za neku vrednost takodje kada pogodimo neprijatela points teba da se uveca ya neku vrednost
static void on_timer_rotate_object_in_left_corner(int value);//rotira zemlju

static void on_timer_enemy_fire(int value);// timer fje za ispaljivanje metkica 
static void on_timer_enemy_fire1(int value);
static void on_timer_enemy_fire2(int value);
static void on_timer_enemy_fire3(int value);






/*inicijalizacija */
static void initEnemy();
static void initLight();
static void initPlayer();
static void initObject();
static void initGifts();
static void initEnemyBullets();
static void initBullet();

/*provere da li se x i y koordinate poklapajku ovo nam treba da bi mogli da ubijemo neprijatelja*/
static int check_x_coor(float x);
static int check_y_coor(float y);


/*provere da li se x i y koordinate poklapajku ovo nam treba da bi mogli da pokupimo pokloncic*/
static int check_x_coor_gifts(float x);
static int check_y_coor_gifts(float y);
