VPATH = ../../../../../src/gdb-7.9.1/gdb/testsuite/gdb.trace
srcdir = ../../../../../src/gdb-7.9.1/gdb/testsuite/gdb.trace

.PHONY: all clean mostlyclean distclean realclean

PROGS = actions-changed ax backtrace deltrace disconnected-tracing \
	infotrace packetlen passc-dyn passcount report save-trace tfile \
	tfind tracecmd tsv unavailable while-dyn while-stepping

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f actions circ collection
	-rm -f *.o *.diff *~ *.bad core sh3 hppa mn10300 $(PROGS)
	-rm -f *.dwo *.dwp

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log gdb.log gdb.sum
