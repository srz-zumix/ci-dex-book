
SVG = $(wildcard *.svg)
DPI := 350
DIRPREFIX = badge-png
TARGETS = $(SVG:%.svg=$(DIRPREFIX)$(DPI)/%.jpg)

default: $(TARGETS)

clean:
	rm -rf $(TARGETS)

$(DIRPREFIX)$(DPI):
	mkdir $@

$(DIRPREFIX)$(DPI)/%.jpg: %.svg $(DIRPREFIX)$(DPI)
	inkscape -z -d $(DPI) -f $< -e $@
