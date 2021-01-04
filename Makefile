help: ## show help
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sed -e 's/^GNUmakefile://' | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-20s\033[0m %s\n", $$1, $$2}'

lint:
	npx textlint -f unix ci-dex/contents/*.re

build: ## build local
	docker run -it --rm -v "$(PWD)/ci-dex":/work -w /work kauplan/review2.5 rake preproc all

ebook: ## build ebook local
	docker run -it --rm -e "config=config-e.yml" -v "$(PWD)/ci-dex":/work -w /work kauplan/review2.5 rake preproc all

clean:
	docker run -it --rm -v "$(PWD)/ci-dex":/work -w /work kauplan/review2.5 rake clean

