# -*- coding: utf-8 -*-

##
## これはreviewstarterが用意したファイル。
## ユーザ独自のRakeタスクをここに定義する。
##


#
#def render_eruby_files(param)   # 要 Ruby >= 2.2
#  Dir.glob('**/*.eruby').each do |erubyfile|
#    origfile = erubyfile.sub(/\.eruby$/, '')
#    sh "erb -T 2 '#{param}' #{erubyfile} > #{origfile}"
#  end
#end
#
#
#namespace :setup do
#
#  desc "*印刷用に設定 (B5, 10pt, mono)"
#  task :printing do
#    render_eruby_files('buildmode=printing')
#  end
#
#  desc "*タブレット用に設定 (A5, 10pt, color)"
#  task :tablet do
#    render_eruby_files('buildmode=tablet')
#  end
#
#end
#

require 'fileutils'
require 'review'

desc "clean root *.re"
task :clean do
    config = ReVIEW::Configure.values
    loader = ReVIEW::YAMLLoader.new
    config.deep_merge!(loader.load_file(config_file()))

    rm_f Dir.glob('*.re'), :verbose=>false
    FileUtils.rm_rf("#{config['bookname']}-pdf")
    FileUtils.rm_rf("#{config['bookname']}-epub")
end
