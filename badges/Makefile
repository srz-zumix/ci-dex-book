
SVG = $(wildcard *.svg)
DPI := 96
DIRPREFIX = badge-png
TARGETS = $(SVG:%.svg=$(DIRPREFIX)$(DPI)/%.png)

default: $(TARGETS)

clean:
	rm -rf $(TARGETS)

$(DIRPREFIX)$(DPI):
	mkdir $@

$(DIRPREFIX)$(DPI)/%.png: %.svg $(DIRPREFIX)$(DPI)
	inkscape -z -d $(DPI) -f $< -e $@
