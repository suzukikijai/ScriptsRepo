#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f cleaningCountries.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[3]))
	"\167\057\257\016\275\345\145\276\140\377\031\026\341\275\120\276"
	"\155\351\310\006\347\136\062"
#define      xecc_z	15
#define      xecc	((&data[24]))
	"\344\061\057\045\266\244\333\207\351\235\007\363\017\251\225\051"
	"\134"
#define      chk2_z	19
#define      chk2	((&data[41]))
	"\104\003\166\144\340\331\021\301\001\124\272\343\352\375\254\026"
	"\311\122\253\362\355\055\021"
#define      date_z	1
#define      date	((&data[63]))
	"\175"
#define      pswd_z	256
#define      pswd	((&data[101]))
	"\347\201\235\000\074\244\243\331\365\033\010\244\115\155\017\251"
	"\122\153\232\261\033\337\237\110\360\314\212\146\312\035\375\262"
	"\237\232\263\333\077\201\062\265\252\322\333\001\045\204\126\213"
	"\160\146\137\033\106\106\040\125\245\014\146\200\343\377\215\323"
	"\170\073\334\122\274\017\010\146\341\344\150\006\151\276\221\331"
	"\045\361\365\154\067\026\301\335\042\050\135\006\047\353\331\240"
	"\046\265\363\343\304\373\111\246\340\262\254\111\161\076\043\226"
	"\060\030\002\147\056\304\105\121\354\242\127\024\216\060\264\265"
	"\346\247\230\253\243\342\122\204\224\377\315\006\075\361\234\156"
	"\011\236\326\070\143\033\212\117\276\341\143\114\022\030\002\371"
	"\300\233\245\143\176\367\350\023\366\266\031\064\247\265\242\261"
	"\124\170\351\267\223\164\007\121\126\152\236\150\202\240\142\103"
	"\074\010\247\272\377\217\315\366\105\346\053\354\234\315\236\360"
	"\106\210\250\331\374\257\053\122\032\311\273\235\152\036\340\246"
	"\046\207\141\046\026\056\034\133\025\110\110\261\025\347\242\134"
	"\157\112\066\153\372\141\275\024\053\171\261\226\227\221\074\275"
	"\030\235\344\056\314\001\212\341\111\323\222\137\272\065\273\051"
	"\200\361\225\172\122\123\216\176\314\077\024\144\321\121\041\351"
	"\356\006\030\273\007\126\264\064\161\275\331\276\052\350\147\174"
	"\124\002\056\160\341\315\270\322\231\103\070\144\140\065\027\000"
	"\320\312\333\020\041\220\104\222\116\036\121"
#define      tst1_z	22
#define      tst1	((&data[395]))
	"\223\346\164\305\243\347\331\135\367\274\360\220\016\010\217\004"
	"\120\015\323\033\312\167\366\134\274\044"
#define      opts_z	1
#define      opts	((&data[421]))
	"\366"
#define      chk1_z	22
#define      chk1	((&data[424]))
	"\310\247\251\033\026\146\113\123\256\351\371\172\106\042\262\050"
	"\253\150\374\161\344\207\234\131\360\051\335"
#define      msg1_z	42
#define      msg1	((&data[450]))
	"\321\062\047\231\202\154\322\262\036\165\207\215\113\014\231\343"
	"\267\252\134\254\260\163\111\201\127\120\152\136\210\215\156\265"
	"\046\151\247\144\362\156\355\007\034\032\047\005\276\362\226\002"
	"\205\344"
#define      shll_z	10
#define      shll	((&data[501]))
	"\050\221\167\023\311\230\004\103\023\171\252\245\123"
#define      rlax_z	1
#define      rlax	((&data[512]))
	"\215"
#define      inlo_z	3
#define      inlo	((&data[513]))
	"\010\150\046"
#define      text_z	813
#define      text	((&data[587]))
	"\236\002\345\307\337\355\361\215\276\366\113\261\215\116\066\161"
	"\157\016\317\227\237\043\034\354\233\154\326\005\101\061\372\337"
	"\063\340\247\023\315\230\240\214\217\354\076\034\073\165\216\253"
	"\203\135\103\042\201\137\017\034\313\346\041\015\027\034\355\112"
	"\375\224\135\313\055\376\127\246\242\000\153\044\016\260\102\310"
	"\251\037\335\154\132\046\377\262\032\116\367\116\350\302\315\176"
	"\166\053\267\220\065\332\107\303\334\047\335\315\032\064\324\277"
	"\267\107\113\035\201\023\210\326\247\023\024\222\116\151\257\316"
	"\232\115\321\025\214\001\255\066\241\030\237\343\106\006\364\032"
	"\004\206\105\334\146\206\357\114\252\314\162\327\146\142\133\320"
	"\302\165\113\376\371\072\363\325\313\121\312\357\203\037\314\003"
	"\203\313\110\110\111\311\072\234\300\317\365\010\156\117\325\024"
	"\344\306\101\276\135\071\133\152\341\123\124\351\145\113\342\315"
	"\011\322\266\232\300\020\146\020\223\220\170\054\361\052\246\034"
	"\354\135\314\241\374\067\214\145\110\201\101\260\147\322\066\212"
	"\226\116\120\035\124\113\237\231\076\363\101\116\336\201\016\154"
	"\062\243\027\050\013\176\307\374\242\223\050\352\131\205\207\377"
	"\207\126\232\132\300\147\320\146\164\236\251\111\157\007\331\243"
	"\244\237\263\270\230\077\215\254\266\261\142\102\205\042\211\016"
	"\162\266\267\020\125\272\332\104\013\036\062\225\133\230\153\171"
	"\124\357\212\263\345\142\020\362\000\026\342\376\206\030\131\167"
	"\203\060\077\122\310\157\120\065\242\041\337\316\127\354\320\137"
	"\111\323\163\267\343\164\027\330\320\116\256\362\304\174\177\142"
	"\144\201\076\324\052\335\243\154\372\122\210\373\036\325\032\271"
	"\224\331\150\102\075\251\162\301\127\225\234\070\177\203\346\241"
	"\030\366\114\325\033\251\217\046\172\221\131\211\247\205\240\007"
	"\353\167\243\315\031\360\147\346\243\153\123\317\373\201\136\331"
	"\301\061\273\111\205\224\256\076\001\243\264\264\044\251\316\040"
	"\372\322\363\302\334\025\373\251\250\060\271\032\321\136\376\346"
	"\054\223\350\324\342\072\311\355\041\117\337\174\147\047\251\267"
	"\351\376\354\210\003\032\141\302\113\015\042\305\374\244\341\375"
	"\317\106\367\077\166\140\045\167\035\053\155\153\232\031\344\361"
	"\013\264\212\141\007\037\267\103\170\110\122\114\305\056\227\007"
	"\373\314\165\133\041\155\265\032\064\352\133\077\336\071\213\005"
	"\177\356\342\144\321\272\237\314\034\302\000\133\343\313\030\100"
	"\112\222\025\356\155\125\215\356\217\232\255\046\074\020\042\332"
	"\024\141\227\104\361\247\304\257\236\372\047\234\200\254\067\366"
	"\043\207\042\371\230\201\143\342\211\333\262\207\103\271\360\233"
	"\002\272\376\130\356\102\127\252\013\163\346\123\336\056\335\250"
	"\122\343\133\156\014\137\321\376\174\213\211\243\207\040\156\032"
	"\016\051\142\240\301\053\165\364\351\026\233\317\104\137\161\047"
	"\070\027\273\236\155\272\134\153\060\011\217\171\233\321\015\113"
	"\172\376\312\254\045\353\000\114\137\020\012\342\137\215\000\174"
	"\003\146\241\113\106\345\302\256\130\062\102\237\141\307\114\107"
	"\015\111\264\146\101\113\216\063\120\237\237\264\346\010\225\063"
	"\265\215\336\102\220\034\172\052\161\041\356\126\151\365\234\354"
	"\362\303\032\341\246\267\130\340\205\015\210\015\123\251\220\013"
	"\275\365\040\042\207\231\202\054\207\057\222\367\141\276\230\007"
	"\206\352\210\021\014\126\341\345\071\211\344\113\177\376\322\021"
	"\363\030\025\317\235\157\003\277\002\354\114\076\343\354\161\202"
	"\252\004\006\177\162\326\113\375\225\357\164\052\350\377\350\266"
	"\007\124\102\002\234\024\325\273\036\345\057\163\216\176\366\266"
	"\161\360\275\176\033\054\330\045\321\112\170\343\020\050\341\254"
	"\102\277\053\315\231\045\366\013\365\153\160\077\023\010\312\277"
	"\073\137\003\074\106\064\371\126\167\165\072\375\247\167\325\163"
	"\212\061\042\215\275\353\226\331\046\013\150\321\217\306\024\261"
	"\107\164\301\143\077\247\204\115\276\241\072\011\236\317\147\151"
	"\375\146\301\272\121\127\224\167\143\374\111\362\302\136\244\011"
	"\322\145\154\022\014\361\137\313\223\232\325\061\152\075\233\147"
	"\243\135\042\364\264\266\154\030\263\266\012\165\024\257\177\347"
	"\024\353\371\041\335\131\355\160\364\303\242\136\000\076\306\243"
	"\233\350\230\120\237\004\150\122\272\163\307\317\042\106\266\067"
	"\062\260\131\020\011\107\201\376\012\044\134\012\142\042\256\375"
	"\013\106\115\252\112\266\374\005\051\304\324\114\013\212\204\075"
	"\073\335\116\104\045\320\102\057\364\237\072\126\302\350\124\315"
	"\056\242\167\171\130\164\176\202\070\122\317\103\335\123\201\030"
	"\061\320\135\126\240\240\205\225\077\300\354\001\250\100\317\326"
	"\343\107\120\073\273\316\276"
#define      lsto_z	1
#define      lsto	((&data[1595]))
	"\351"
#define      tst2_z	19
#define      tst2	((&data[1600]))
	"\271\027\022\212\041\056\002\207\043\014\076\063\073\374\110\365"
	"\304\325\207\135\243\164\070\165\151\053\025"/* End of data[] */;
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
