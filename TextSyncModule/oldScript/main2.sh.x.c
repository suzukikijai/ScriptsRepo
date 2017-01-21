#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f ./main2.sh 
#endif

static  char data [] = 
#define      pswd_z	256
#define      pswd	((&data[58]))
	"\214\120\250\163\152\167\330\373\045\232\076\351\225\242\174\210"
	"\350\176\366\025\035\031\264\237\247\344\030\307\347\001\040\164"
	"\121\311\347\273\100\300\267\145\132\366\117\360\231\314\171\201"
	"\112\157\227\147\211\114\007\061\060\040\014\301\231\242\064\007"
	"\260\323\034\225\337\155\226\143\115\014\250\130\033\000\137\311"
	"\260\151\334\166\225\113\143\322\152\160\224\004\022\310\013\303"
	"\234\050\130\173\225\357\336\342\374\206\073\030\207\233\342\067"
	"\005\276\255\232\012\021\154\164\201\000\170\224\311\204\127\145"
	"\254\260\340\102\240\277\045\234\106\140\264\315\374\226\005\001"
	"\125\262\233\137\304\010\324\105\010\115\331\321\321\061\066\176"
	"\341\027\300\202\326\345\036\034\105\322\352\102\151\357\103\276"
	"\242\337\036\146\347\362\253\360\077\205\302\020\266\371\216\230"
	"\020\117\032\347\064\071\003\172\013\356\274\165\335\377\064\177"
	"\337\122\345\306\104\221\267\204\026\171\224\315\162\043\145\202"
	"\163\200\151\247\271\155\041\305\134\335\072\071\335\156\270\274"
	"\301\236\203\005\057\073\211\106\264\036\023\046\102\170\251\265"
	"\370\023\135\262\201\176\167\335\134\261\026\072\040\317\367\341"
	"\155\172\347\235\265\161\343\152\220\366\221\323\157\072\211\150"
	"\116\346\032\317\145\221\255\301\103\304\373\143\223\362\105\001"
	"\155\055\236\043\237\202\216\057\171\037\370\030\041\031\215\163"
	"\342\165\057\043\065\346\211\220\335\330\201\166\244\372\370\356"
#define      lsto_z	1
#define      lsto	((&data[336]))
	"\000"
#define      chk2_z	19
#define      chk2	((&data[341]))
	"\045\014\176\036\020\055\152\123\064\074\076\237\164\124\237\174"
	"\125\242\320\020\333\225\165\045"
#define      msg2_z	19
#define      msg2	((&data[362]))
	"\023\077\012\355\171\333\061\046\140\273\360\126\062\132\020\023"
	"\046\143\343\234\032\050\102"
#define      shll_z	10
#define      shll	((&data[385]))
	"\306\154\215\236\357\173\010\034\226\370\236"
#define      tst2_z	19
#define      tst2	((&data[395]))
	"\042\103\020\160\004\264\371\321\165\023\213\317\332\157\247\054"
	"\330\177\311\160\175\103"
#define      tst1_z	22
#define      tst1	((&data[419]))
	"\325\005\343\373\214\270\256\336\162\371\235\215\174\357\324\373"
	"\351\300\120\230\042\024\240\273\211"
#define      opts_z	1
#define      opts	((&data[442]))
	"\313"
#define      msg1_z	42
#define      msg1	((&data[453]))
	"\015\023\007\105\306\032\137\356\135\234\026\174\040\234\045\013"
	"\300\007\037\167\000\332\266\113\161\001\275\022\211\053\022\115"
	"\225\120\060\041\306\336\165\341\123\264\323\064\174\115\032\042"
	"\002\054\350\264\115\206\143\074"
#define      chk1_z	22
#define      chk1	((&data[499]))
	"\335\107\154\302\130\262\375\046\000\067\002\105\130\370\071\200"
	"\036\350\044\022\367\130\013\106\027\200"
#define      rlax_z	1
#define      rlax	((&data[525]))
	"\345"
#define      date_z	1
#define      date	((&data[526]))
	"\236"
#define      inlo_z	3
#define      inlo	((&data[527]))
	"\327\222\244"
#define      xecc_z	15
#define      xecc	((&data[532]))
	"\130\373\275\011\257\224\067\155\372\160\351\254\006\266\275\231"
	"\011\057"
#define      text_z	1002
#define      text	((&data[637]))
	"\320\367\154\126\133\250\344\136\124\357\245\154\160\036\132\366"
	"\041\021\136\014\271\264\135\157\035\266\152\115\051\305\154\371"
	"\275\330\120\030\200\064\166\325\044\033\101\224\072\233\213\133"
	"\255\351\147\146\235\305\326\273\173\100\010\244\005\165\235\302"
	"\115\356\333\316\042\122\243\106\156\345\333\250\200\146\004\056"
	"\117\154\224\355\061\153\250\255\253\167\132\100\265\165\043\016"
	"\104\063\007\106\131\247\306\115\310\116\255\066\202\313\074\133"
	"\161\031\104\035\213\025\057\102\070\242\131\125\177\055\031\050"
	"\140\362\316\015\366\113\045\121\306\054\234\113\237\041\323\330"
	"\374\103\110\052\152\343\274\262\171\143\262\142\213\216\024\370"
	"\033\124\340\152\344\020\101\226\011\121\216\145\164\004\305\200"
	"\361\303\164\317\312\242\255\153\347\002\176\047\122\316\320\370"
	"\373\334\111\365\347\135\241\165\022\063\265\151\224\023\152\347"
	"\012\044\303\320\135\323\107\034\127\362\014\275\100\125\053\365"
	"\372\255\142\276\311\163\300\205\210\161\034\330\322\054\224\002"
	"\232\217\273\256\153\053\120\002\006\040\264\042\024\370\123\157"
	"\165\344\160\311\256\267\133\253\105\044\255\250\151\231\226\347"
	"\163\157\332\357\266\043\120\130\144\055\342\274\273\332\014\355"
	"\352\042\265\300\027\300\241\236\176\065\074\260\260\015\354\272"
	"\323\127\230\054\214\210\016\135\075\036\042\165\267\270\034\314"
	"\074\202\111\156\165\327\301\052\024\144\246\162\206\021\323\201"
	"\061\075\010\030\043\046\067\304\215\050\337\003\206\101\363\375"
	"\102\311\004\155\235\067\327\141\275\261\146\020\314\301\116\234"
	"\027\175\244\110\121\371\235\053\221\016\377\277\031\032\126\013"
	"\077\343\251\275\256\064\376\225\232\252\372\140\046\041\016\342"
	"\026\105\037\016\247\260\162\012\036\076\270\151\257\220\367\311"
	"\262\165\030\002\360\253\115\216\104\135\217\064\112\065\000\371"
	"\011\224\157\056\033\251\352\141\171\120\151\101\254\210\324\357"
	"\017\204\050\363\363\355\232\263\067\360\214\062\374\143\374\215"
	"\015\000\152\307\070\251\047\102\261\263\263\245\370\244\112\205"
	"\210\147\130\305\056\171\003\221\055\255\027\144\156\337\325\144"
	"\357\220\154\366\155\132\053\375\211\316\344\251\256\010\305\165"
	"\300\144\355\024\240\341\065\217\026\064\075\207\205\376\166\265"
	"\312\314\034\141\016\047\062\001\315\356\325\165\071\254\063\153"
	"\117\174\356\033\352\153\126\255\223\041\015\001\323\234\104\006"
	"\204\301\210\052\120\073\120\114\250\210\124\203\060\323\234\310"
	"\324\342\042\311\142\247\140\360\100\060\067\161\167\160\145\116"
	"\003\365\173\270\147\214\336\027\277\275\113\056\263\000\201\065"
	"\032\013\066\342\222\162\277\161\030\010\076\157\356\374\357\346"
	"\066\021\273\155\056\147\145\264\371\111\330\322\177\345\115\261"
	"\031\201\176\373\213\107\151\277\137\060\105\317\260\361\356\317"
	"\010\022\364\014\173\376\314\375\362\213\353\227\022\335\347\256"
	"\257\026\370\151\332\226\235\074\121\063\104\334\077\163\371\102"
	"\226\142\316\071\305\223\244\077\032\200\054\175\074\002\310\117"
	"\051\352\322\051\374\335\362\005\215\213\143\175\220\322\370\250"
	"\363\275\345\242\325\124\061\226\341\212\154\027\356\177\122\122"
	"\164\026\032\246\263\353\267\120\372\324\133\154\240\116\060\366"
	"\362\160\262\107\374\140\007\221\301\314\122\076\303\015\374\215"
	"\162\317\317\202\041\062\027\005\172\261\147\251\001\104\364\215"
	"\365\104\123\306\254\226\346\104\214\252\040\005\031\313\324\272"
	"\157\375\026\002\253\352\140\003\175\011\040\261\225\166\355\214"
	"\317\143\150\200\237\041\112\107\250\223\370\150\221\160\160\207"
	"\244\345\057\242\337\012\347\065\303\140\302\327\345\364\115\055"
	"\270\277\105\225\332\163\066\311\262\246\173\240\300\134\163\064"
	"\152\307\137\277\145\320\116\147\110\201\377\033\235\251\142\231"
	"\215\215\003\145\105\074\042\173\072\070\303\310\032\302\350\257"
	"\310\014\173\234\217\122\332\130\344\363\104\327\255\151\177\206"
	"\132\024\366\207\205\226\326\005\024\330\053\006\072\063\005\202"
	"\020\051\236\061\160\320\370\013\361\363\025\121\226\014\136\166"
	"\175\165\247\076\016\121\111\355\170\101\363\061\274\077\037\060"
	"\357\174\244\244\145\135\042\025\066\251\165\166\101\144\074\022"
	"\324\037\205\257\262\066\372\326\331\230\266\061\045\050\014\267"
	"\206\325\225\140\132\354\023\370\005\141\051\260\311\265\011\100"
	"\155\161\367\055\002\322\350\014\003\024\300\160\003\315\076\021"
	"\021\140\032\022\150\301\114\104\046\170\312\321\030\302\251\244"
	"\063\350\205\013\074\172\072\051\046\223\040\007\262\140\216\046"
	"\031\342\232\333\104\241\110\045\157\306\372\154\045\065\006\021"
	"\072\047\377\103\036\307\075\325\027\233\042\141\323\303\013\111"
	"\172\274\265\261\121\261\047\357\164\164\336\117\103\001\242\346"
	"\107\020\314\043\271\114\211\276\172\331\052\017\307\134\172\160"
	"\011"/* End of data[] */;
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
