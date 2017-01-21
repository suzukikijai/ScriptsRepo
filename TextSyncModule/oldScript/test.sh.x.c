#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f ./test.sh 
#endif

static  char data [] = 
#define      text_z	1001
#define      text	((&data[151]))
	"\310\232\327\115\042\241\004\103\377\067\101\316\104\040\027\104"
	"\266\366\136\071\132\136\251\052\027\350\326\131\275\161\143\206"
	"\013\073\324\055\334\331\160\333\020\261\252\124\321\301\231\210"
	"\270\370\301\023\126\152\075\156\123\024\307\021\205\053\227\221"
	"\146\154\276\103\105\057\036\125\341\311\252\263\213\104\073\103"
	"\074\374\127\223\147\225\001\272\251\311\313\057\364\143\300\133"
	"\317\177\236\025\256\275\152\217\207\025\102\022\131\175\126\226"
	"\172\255\051\342\103\053\234\354\365\150\034\352\313\335\105\233"
	"\135\344\260\013\241\033\233\051\060\336\074\212\134\222\040\327"
	"\100\111\271\203\165\126\160\042\125\250\054\073\053\334\015\023"
	"\144\115\031\235\221\227\273\205\161\372\223\326\105\236\256\201"
	"\104\174\314\114\225\045\251\142\164\352\362\242\203\272\101\137"
	"\035\225\240\147\375\222\363\130\311\124\216\375\110\031\033\100"
	"\163\373\177\005\130\151\173\202\150\315\015\077\173\315\032\044"
	"\335\157\335\167\267\174\356\156\055\374\172\265\277\060\314\011"
	"\205\200\105\132\305\077\153\364\226\215\071\373\336\127\134\017"
	"\336\014\372\045\315\063\062\167\326\374\143\065\233\073\245\004"
	"\022\114\343\146\361\234\211\167\202\075\055\065\265\256\377\324"
	"\333\352\314\140\106\031\002\132\323\163\237\265\334\136\143\372"
	"\175\053\062\027\073\077\162\206\305\052\117\300\002\005\145\113"
	"\023\373\060\364\267\371\057\072\005\325\355\375\064\047\175\000"
	"\376\024\013\301\151\170\005\143\067\044\052\030\174\337\253\361"
	"\360\116\161\312\077\111\115\311\215\336\011\101\336\054\106\141"
	"\155\126\075\327\061\130\274\322\045\325\340\367\024\006\022\227"
	"\334\120\301\136\117\315\154\211\230\235\315\154\233\162\010\055"
	"\201\160\261\061\210\063\050\200\230\262\026\331\214\025\111\377"
	"\337\162\314\070\170\324\034\027\335\377\251\007\026\122\023\341"
	"\110\007\320\313\273\177\330\353\031\300\152\116\243\145\034\112"
	"\213\151\241\233\377\354\040\343\312\352\157\047\361\070\201\355"
	"\361\061\112\256\014\111\234\253\002\323\201\304\072\030\302\133"
	"\004\046\106\070\236\176\005\377\263\076\040\036\020\223\315\257"
	"\067\337\132\257\313\023\262\236\266\266\247\027\114\004\276\335"
	"\137\321\274\316\065\324\076\031\007\145\107\156\112\251\364\025"
	"\302\203\046\063\156\023\226\177\232\132\102\365\313\211\276\045"
	"\354\064\020\205\226\032\370\026\354\002\314\075\165\010\044\040"
	"\362\070\126\246\121\270\125\346\221\274\321\311\025\051\345\053"
	"\163\227\231\167\250\260\032\234\364\077\345\032\265\057\070\343"
	"\315\262\000\235\022\116\345\325\115\147\027\113\067\102\222\227"
	"\102\007\056\124\376\110\135\101\302\271\374\215\251\270\145\374"
	"\274\305\107\151\007\155\207\216\152\210\360\271\300\347\075\377"
	"\362\011\244\151\355\010\352\340\123\204\104\306\061\075\174\106"
	"\046\017\144\241\066\005\164\124\253\252\303\046\365\100\267\331"
	"\370\127\017\101\157\023\155\107\106\164\371\126\034\206\125\336"
	"\106\233\205\341\341\351\203\051\213\063\322\176\320\072\030\366"
	"\214\107\245\100\321\137\272\260\053\133\271\012\061\173\001\276"
	"\243\017\162\200\320\272\115\165\172\113\074\050\165\117\057\216"
	"\164\054\101\113\276\170\015\171\245\033\112\124\201\327\377\147"
	"\136\154\102\135\161\043\012\215\015\247\032\311\306\205\004\044"
	"\115\144\042\154\021\014\000\075\140\161\163\066\251\207\273\176"
	"\160\307\353\125\160\211\135\356\105\316\257\262\007\034\041\312"
	"\034\267\236\243\056\003\014\170\116\072\135\101\016\071\365\314"
	"\252\247\361\131\266\143\347\370\232\335\203\321\362\252\203\277"
	"\205\315\116\150\200\155\254\115\136\335\327\162\165\304\224\126"
	"\013\303\232\077\123\121\304\337\306\025\312\075\313\150\015\101"
	"\372\006\140\104\130\237\273\311\175\243\274\255\223\114\013\031"
	"\175\022\335\160\213\107\132\066\336\074\157\317\024\345\112\353"
	"\255\357\000\014\013\167\006\060\040\345\350\003\000\157\201\243"
	"\271\323\031\135\231\375\361\174\030\055\215\343\267\352\171\037"
	"\257\134\300\112\344\062\011\262\011\060\360\172\317\022\162\223"
	"\035\243\160\031\005\335\162\253\033\027\007\130\117\224\360\132"
	"\241\003\037\246\173\344\134\106\176\316\370\142\224\107\322\042"
	"\257\117\026\064\070\311\051\200\367\132\053\030\031\071\151\207"
	"\207\012\373\344\005\210\304\101\323\130\015\123\003\321\265\254"
	"\127\061\226\215\316\356\313\044\014\010\063\033\373\263\166\015"
	"\202\000\317\337\156\253\376\057\141\276\072\205\167\363\113\362"
	"\110\002\122\056\360\314\305\362\226\167\156\215\357\221\136\035"
	"\363\313\256\146\235\046\337\122\145\303\374\234\010\130\043\161"
	"\123\244\222\375\010\341\347\016\351\122\215\126\201\266\343\372"
	"\017\310\223\143\110\222\245\353\263\245\055\005\273\362\172\356"
	"\277\156\003\056\226\202\270\176\033\232\102\311\001\255\075\103"
	"\365\104\162\271\354\103\206\333\045\267\030\122\364\043\212\062"
	"\312\041\211\027\334\217\127\143\357\137\326\145\052\004\164\065"
	"\152\276\215\124\212\152\231\046\307\176"
#define      tst2_z	19
#define      tst2	((&data[1166]))
	"\362\157\111\043\205\104\001\062\107\231\242\214\015\306\023\376"
	"\033\177\205\147\002\054\333"
#define      inlo_z	3
#define      inlo	((&data[1185]))
	"\141\333\076"
#define      msg2_z	19
#define      msg2	((&data[1188]))
	"\315\204\113\065\054\200\326\176\234\226\063\137\042\201\105\266"
	"\006\021\156\201\130\027\073"
#define      chk2_z	19
#define      chk2	((&data[1213]))
	"\115\366\237\174\347\371\203\024\256\003\320\233\075\223\367\211"
	"\127\016\247\210\300\117\332"
#define      xecc_z	15
#define      xecc	((&data[1237]))
	"\344\000\015\063\363\314\007\050\020\152\116\106\177\130\231\210"
	"\177\266\143"
#define      pswd_z	256
#define      pswd	((&data[1310]))
	"\311\120\314\355\236\121\232\111\152\150\312\302\200\006\237\014"
	"\227\354\003\347\307\116\301\014\063\301\032\226\231\373\032\143"
	"\113\346\120\352\070\353\063\242\123\376\145\324\004\004\340\233"
	"\361\344\203\271\063\104\305\147\006\137\272\002\310\333\030\202"
	"\101\337\311\000\050\211\023\012\126\171\360\106\261\052\026\064"
	"\001\042\143\146\020\255\142\143\015\034\145\325\367\176\130\071"
	"\135\042\071\206\253\115\220\002\306\201\111\170\253\137\254\254"
	"\201\020\023\222\276\165\366\313\221\133\240\211\332\371\302\067"
	"\033\374\276\306\111\116\311\020\317\022\210\173\161\064\050\363"
	"\105\073\206\003\260\174\316\101\330\157\313\262\150\215\352\204"
	"\212\250\112\324\366\024\344\306\046\155\101\230\242\151\213\347"
	"\244\022\352\125\217\271\227\147\050\142\032\221\360\004\025\173"
	"\254\140\117\243\164\064\151\233\241\252\063\103\024\277\053\271"
	"\321\026\016\141\317\245\310\370\010\342\212\370\346\240\163\223"
	"\000\303\066\165\367\237\020\230\112\104\334\136\003\007\030\325"
	"\036\046\066\355\314\377\346\324\341\161\315\310\021\101\133\022"
	"\004\222\207\373\061\230\224\174\335\161\332\341\170\362\266\226"
	"\031\355\204\345\354\153\272\316\334\207\227\355\310\362\000\315"
	"\205\207\311\266\040\136\062\376\317\015\337\110\000\225\337\031"
	"\203\144\377\160\317\271\076\254\101\340\376\237\333\030\002\047"
	"\377\123\021\067\076\105\332\222\103\100\146\110\104\107\344\066"
	"\053\147\357\137\253\265\306\261\225\305"
#define      lsto_z	1
#define      lsto	((&data[1599]))
	"\070"
#define      tst1_z	22
#define      tst1	((&data[1603]))
	"\247\251\025\140\261\071\257\161\043\235\321\100\012\116\144\066"
	"\315\265\237\200\116\355\242\232\244\345\356\357\167\062"
#define      date_z	1
#define      date	((&data[1630]))
	"\165"
#define      chk1_z	22
#define      chk1	((&data[1631]))
	"\137\145\300\376\323\227\173\277\366\242\207\110\037\267\155\357"
	"\045\010\020\261\313\205\253\120"
#define      opts_z	1
#define      opts	((&data[1655]))
	"\216"
#define      rlax_z	1
#define      rlax	((&data[1656]))
	"\232"
#define      shll_z	10
#define      shll	((&data[1659]))
	"\164\126\345\015\371\354\033\244\370\266\202\223"
#define      msg1_z	42
#define      msg1	((&data[1677]))
	"\366\160\230\013\125\207\373\314\010\254\171\174\235\315\256\343"
	"\334\325\374\007\050\165\371\013\326\305\065\131\330\351\341\010"
	"\213\122\126\310\006\305\122\344\010\305\202\264\205\204\255\017"
	"\306\067\272\052\252\064\237\316\223\112\036\131"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
