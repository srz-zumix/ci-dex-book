
SVG = $(wildcard *.svg)
DPI := 350
DIRPREFIX = badge-
PNGS = $(SVG:%.svg=$(DIRPREFIX)png$(DPI)/%.png)
JPEGS = $(SVG:%.svg=$(DIRPREFIX)jpg$(DPI)/%.jpg)
TARGETS=$(PNGS) $(JPEGS)

default: $(JPEGS)

png: $(PNGS)
jpg: $(JPEGS)

docker:
	docker pull srzzumix/actions-book-image-check

clean:
	rm -rf $(TARGETS)

$(DIRPREFIX)png$(DPI):
	mkdir $@

$(DIRPREFIX)jpg$(DPI):
	mkdir $@

$(DIRPREFIX)png$(DPI)/%.png: %.svg $(DIRPREFIX)png$(DPI) Makefile
	inkscape -z -d $(DPI) -f $< -e $@

$(DIRPREFIX)jpg$(DPI)/%.jpg: $(DIRPREFIX)png$(DPI)/%.png $(DIRPREFIX)jpg$(DPI) Makefile docker
# $(DIRPREFIX)jpg$(DPI)/%.jpg: %.svg $(DIRPREFIX)jpg$(DPI)
	docker run --rm -it -v /${shell pwd}:/target --entrypoint bash srzzumix/actions-book-image-check -c "cd /target && convert $< -flatten -background transparent -density 350 -units PixelsPerInch -resize x80 $@" ;
