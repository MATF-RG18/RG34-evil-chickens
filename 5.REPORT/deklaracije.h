static void Init_Inidkator_For_Draw_Enemy();//inicijalizuje niz na Ind_Draw_Enemy 1 samo jedanput na pocetku
static void Init_Indikator_For_Bullet();//inicijalizuje niz Ind_Bullet_isNot_Empty na pocetku samo jednom
static void initialize_bullet_arry(int id);// menja niy Ind_Bullet_isNot_Empty u zavisnosti od toga da li je pogodjen


int unisten=0;//indikator da je metak unisten kad pogodi jednog neprijatelja



int Win();//proverava da li su svi neprijatelji ubijeni kada jesu signalizira da smo pobedili



int Ind_Draw_Enemy[37];// niz  za iscrtavanje neprijatelja
int Ind_Bullet_isNot_Empty[37]; // niz koji za odredjivanje da li je metak prazan ili ne
int Ind_save_index[37]; // pomocni niz da omogucimo ubijanje jednog neprijatelja jednim metkom

int not_init=1;//da nizove inicalizuje samo jednom
int not_init1=1;







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

float animation_parametars=0;// da rotiramo sunce

float xr=0,yr=0;//za translaciju igraca

float gifts1=5;
float gifts2=10;
float gifts3=12;
float gifts4=17;
float gifts5=25;
float gifts6=29;
float gifts7=30;
float gifts8=40;
float gifts9=50; // pomocne za poklone koji ce padati u nekom trenutku


static void on_display(void);
static void on_keyboard(unsigned char key, int x, int y);
static void on_reshape(int width, int height);

static void on_timer_move_bullet(int value);//bullet
static void on_timer_move_enemy(int value);//za pomeranje protivnika levo desno
static void on_timer_show_gifts(int value);//za poklone da padaju u razlicitom vremenskom intervalu dodati kada se poklope koordinate poklona i igraca da se points uveca 
//za neku vrednost takodje kada pogodimo neprijatela points teba da se uveca ya neku vrednost
static void on_timer_rotate_object_in_left_corner(int value);//rotira zemlju

static void on_timer_enemy_fire1(int value);// za metkove protivnika staviti nekako u jedan timer
static void on_timer_enemy_fire2(int value);
static void on_timer_enemy_fire3(int value);
static void on_timer_enemy_fire4(int value);
static void on_timer_enemy_fire5(int value);
static void on_timer_enemy_fire6(int value);






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