import logging
import logging.config

print('hello1')
logging.info('hello1')

logging.config.fileConfig(fname='conf/logging.conf', disable_existing_loggers=False)

logger = logging.getLogger(__name__)
logger2 = logging.getLogger('test1')
# # create logger
# logger.setLevel(logging.DEBUG)
#
# # create console handler and set level to debug
# ch = logging.StreamHandler()
# ch.setLevel(logging.DEBUG)
#
# # create formatter
# formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
#
# # add formatter to ch
# ch.setFormatter(formatter)
#
# # add ch to logger
# logger.addHandler(ch)

# 'application' code
logger.debug('debug message')
logger.info('info message')
logger.warning('warn message')
logger.error('error message')
logger.critical('critical message')

logger2.debug('debug message')
logger2.info('info message')
logger2.warning('warn message')
logger2.error('error message')
logger2.critical('critical message')