#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f ServerComponentsRestart.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\060"
#define      tst2_z	19
#define      tst2	((&data[5]))
	"\167\204\317\155\330\243\017\236\171\022\264\253\040\202\131\354"
	"\204\335\071\232\062\066\134\140\011\060"
#define      msg2_z	19
#define      msg2	((&data[30]))
	"\243\016\011\211\155\304\122\015\314\257\164\163\137\105\306\037"
	"\316\357\075\327\112\052\236\171\211\032"
#define      xecc_z	15
#define      xecc	((&data[55]))
	"\031\247\262\343\333\121\350\107\040\153\154\320\017\016\105\314"
	"\201\013"
#define      inlo_z	3
#define      inlo	((&data[71]))
	"\271\224\230"
#define      msg1_z	42
#define      msg1	((&data[79]))
	"\006\070\311\212\010\122\136\277\210\144\126\125\120\140\030\107"
	"\044\330\130\225\077\215\016\033\364\011\362\224\051\246\104\375"
	"\017\354\114\147\352\207\101\136\032\056\046\370\216\374\053\066"
	"\352\021"
#define      tst1_z	22
#define      tst1	((&data[127]))
	"\124\065\300\031\205\225\224\011\046\352\160\230\157\230\067\311"
	"\146\230\040\260\342\211\034\271\160\135\323\071\347"
#define      chk2_z	19
#define      chk2	((&data[155]))
	"\112\253\013\231\200\073\316\327\032\320\036\113\016\373\344\075"
	"\060\071\230\113\025\064\126"
#define      pswd_z	256
#define      pswd	((&data[196]))
	"\026\330\034\034\021\345\247\031\034\221\053\204\044\334\330\131"
	"\234\065\054\326\066\132\334\077\036\030\222\207\302\067\334\365"
	"\311\262\346\046\004\303\247\062\164\127\274\377\336\153\023\102"
	"\365\040\350\054\172\305\153\231\336\376\040\240\065\375\226\377"
	"\257\174\045\264\077\314\347\264\043\243\263\002\017\307\104\004"
	"\350\055\061\143\363\234\374\321\233\035\162\321\032\010\320\312"
	"\205\365\176\304\302\146\171\346\011\055\350\031\364\055\036\335"
	"\133\117\100\116\354\075\037\207\132\221\130\164\231\050\076\037"
	"\036\275\344\341\043\135\307\055\212\260\106\177\336\144\134\071"
	"\263\235\207\240\332\247\047\064\070\200\251\322\251\350\362\307"
	"\246\326\251\312\063\160\367\275\040\076\074\377\243\231\070\127"
	"\066\300\367\021\147\036\105\240\237\357\163\110\327\145\020\175"
	"\073\271\110\156\052\077\054\112\176\150\112\041\001\202\170\070"
	"\102\157\111\252\216\217\112\055\176\275\166\126\042\206\324\135"
	"\100\034\314\152\133\370\265\331\141\377\373\143\201\163\233\304"
	"\343\345\156\161\164\270\237\363\166\025\111\230\234\035\366\334"
	"\071\303\106\225\273\373\157\035\373\152\200\174\336\034\101\301"
	"\001\257\062\165\035\033\151\252\145\024\337\273\014\061\206\042"
	"\011\242\077\032\210\346\064\245\170\140\051\234\074\002\365\331"
	"\070\042\260\125\075\031\377\243\056\336\136\072\020\344\135\031"
	"\207\234\064\020\203\151\265"
#define      date_z	1
#define      date	((&data[503]))
	"\366"
#define      chk1_z	22
#define      chk1	((&data[504]))
	"\361\230\072\254\070\067\125\330\207\263\325\073\022\223\266\050"
	"\157\130\351\011\132\365\216\340\031\260\220"
#define      rlax_z	1
#define      rlax	((&data[531]))
	"\042"
#define      opts_z	1
#define      opts	((&data[532]))
	"\002"
#define      text_z	513
#define      text	((&data[654]))
	"\135\325\160\167\135\015\254\155\221\025\042\215\337\001\045\345"
	"\342\263\305\374\144\126\152\123\001\330\344\331\045\325\355\203"
	"\253\136\372\010\153\246\165\375\274\227\212\233\231\257\201\173"
	"\143\107\167\310\235\342\034\237\273\001\171\341\326\146\144\201"
	"\304\137\211\060\005\377\055\301\226\267\135\060\147\336\253\313"
	"\045\043\224\303\006\260\142\301\261\333\243\207\102\007\011\006"
	"\146\223\066\154\222\144\056\051\033\213\131\203\152\005\116\220"
	"\051\342\124\057\223\266\361\104\222\244\124\100\065\350\074\211"
	"\022\160\147\105\040\012\131\156\000\334\014\352\026\253\107\020"
	"\002\170\271\136\375\177\045\012\010\201\006\201\301\245\341\274"
	"\003\174\226\233\171\311\024\347\136\044\375\247\012\057\223\347"
	"\170\262\301\341\070\346\211\256\130\116\045\323\247\004\332\351"
	"\040\370\063\040\113\015\027\232\352\245\232\242\031\213\114\045"
	"\000\004\102\262\140\374\372\015\001\000\161\307\077\236\311\230"
	"\133\235\363\163\354\075\235\276\347\312\220\041\003\346\144\113"
	"\321\120\072\253\171\040\312\005\151\101\240\200\122\146\011\231"
	"\024\037\307\253\163\021\013\303\221\335\033\115\170\231\014\026"
	"\030\377\317\057\277\061\237\246\213\055\215\030\221\307\302\317"
	"\035\333\031\374\030\127\217\313\265\324\161\150\023\111\246\064"
	"\135\322\056\334\365\264\005\336\167\367\105\336\342\357\332\012"
	"\307\274\220\101\032\147\051\221\062\012\013\133\261\217\337\020"
	"\207\315\311\221\012\144\204\261\274\024\150\247\175\321\274\070"
	"\257\253\070\135\247\105\106\256\355\315\204\114\235\110\215\131"
	"\333\240\267\043\002\011\236\035\010\040\336\256\054\240\361\131"
	"\215\121\231\146\216\323\372\354\222\143\306\040\015\273\374\344"
	"\334\074\262\365\025\122\365\101\327\355\364\250\266\213\251\355"
	"\123\273\202\200\020\202\317\372\246\173\053\206\121\234\175\071"
	"\017\116\132\114\262\300\142\126\165\023\006\237\074\160\347\211"
	"\301\260\174\071\241\117\071\340\274\033\203\063\020\061\111\215"
	"\126\055\046\224\011\032\161\050\261\155\163\241\233\157\374\125"
	"\052\342\007\273\230\244\150\276\270\160\123\160\306\027\053\171"
	"\200\057\151\203\354\132\241\336\164\274\351\130\235\010\202\245"
	"\116\105\046\104\147\061\363\156\150\076\375\366\156\337\217\207"
	"\222\356\124\213\227\160\374\240\274\215\167\053\124\157\071\137"
	"\320\250\103\037\314\313\105\035\245\074\221\050\023\044\205\376"
	"\054\172\356\265\052\166\367\073\122\334\325\065\207\017\231\005"
	"\154\277\165\044\073\124\231\041\130\214\314\227\263\046\025\121"
	"\117\002\076\042\317\070\015\150\213\277\315\177\004\027\007\012"
	"\270\273\231\271\031\005\141\264\077\023\040\137\112\370\163\162"
	"\141\232\006\230\047\102\021\014\303\377\224\314\324\234\325\333"
	"\003\151\021"
#define      shll_z	10
#define      shll	((&data[1178]))
	"\236\044\272\055\344\350\267\004\120\301\201\160\222"/* End of data[] */;
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
