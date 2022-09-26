#cerner_2tothe5th_2022
#cerner_2^5_2022
require "aws-sdk-s3"

ACCESS_KEY_ID = ENTER_ACCESS_KEY
SECRET_ACCESS_KEY = ENTER_SECRET_ACCESS_KEY
REGION_ID = "us-west-2"
def object_uploaded?(s3_client, bucket_name, object_key)
    response = s3_client.put_object(bucket: bucket_name, key: object_key)
    if response.etag
        return true
    else
        return false
    end
rescue StandardError => e
  puts "Error uploading object: #{e.message}"
  return false
end
def run_demo
    object_key = PATH_OF_FILE_TO_UPLOAD_IN_S3_BUCKET
    credentials = Aws::Credentials.new(ACCESS_KEY_ID, SECRET_ACCESS_KEY)
    s3_client = Aws::S3::Client.new(region: REGION_ID,credentials: credentials)
    bucket_name = BUCKET_NAME_WHERE_FILE_TO_BE_UPLOADED

    if object_uploaded?(s3_client, bucket_name, object_key)
        puts "Object '#{object_key}' uploaded to bucket '#{bucket_name}'."
    else
        puts "Object '#{object_key}' not uploaded to bucket '#{bucket_name}'."
    end
end
run_demo if $PROGRAM_NAME == __FILE__
