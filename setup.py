from setuptools import setup, find_packages

setup(
    name='splus',
    version='0.1',
    author="pankaj.arora",
    description='Solace PubSub+ SDK',
    packages=find_packages(),
    py_modules=['hello'],
    install_requires=[
        'click',
        'requests'
    ],
    license='MIT',
    entry_points='''
        [console_scripts]
        splus=splus:cli
    ''',
)

