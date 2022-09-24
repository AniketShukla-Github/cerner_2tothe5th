#cerner_2tothe5th_2022
#cerner_2^5_2022
import json
import boto3
import zipfile
import urllib
from urllib.parse import unquote_plus
from zipfile import ZipFile
from io import BytesIO
import io
s3=boto3.resource("s3")
def createZipFileStream(bucketName):
    bucket = s3.Bucket(bucketName)
    filesCollection = bucket.objects.all()
    archive = BytesIO()
    # creation of zip files
    with zipfile.ZipFile(archive, 'w', zipfile.ZIP_DEFLATED) as zip_archive:
        for file in filesCollection:
            with zip_archive.open(file.key, 'w') as file1:
                file1.write(file.get()['Body'].read())
    archive.seek(0)
    return archive
def upload_zip(file,jobKey):
    # uploading the zipped archive file
    downloading_bucket = "downloading-bucket-aniket"
    downloading_bucket_folder = 'download-from-lambda'
    s3.Object(downloading_bucket,downloading_bucket_folder + '/' + jobKey + '.zip').upload_fileobj(file)
    file.close()
    return True
def lambda_handler(event, context):
    # Function Call to create zip file
    #bucket name is the name of bucket which you want to download and upload to another server(in this case, another s3 bucket)
    bucketName = "uploading-bucket-aniket2"
    zip_obj = createZipFileStream(bucketName)
    # function to upload the zipped file to s3
    upload_zip(zip_obj,"my_file")
